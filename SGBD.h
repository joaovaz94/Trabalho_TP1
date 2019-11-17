#ifndef SGBD_H
#define SGBD_H

#include <iostream>
#include <stdio.h>
#include <string>
//#include "sqlite3ext.h"
#include "sqlite3.h"
#include "entidades.h"


class SGBD
{
 private:
    //! Ponteiro para conex�o do sqlite3
    sqlite3* bd;
    //! Ponteiro de caracter para salvar Mensagem de Erro
    char *cMenssagemErro;
    //! Resultado de sa�da da opera��o do sqlite3
    int op = 0;
    //! SQL salvo
    std::string sql;

    //! M�todo callback
    static int callback(void *NaoUsado, int argc, char **argv, char **azColName) {
        //! int argc: armazena o n�mero de resultados
        //! (array) azColName: armazena cada coluna retornada
        //! (array) argv: armazena cada valor

        for (int i=0;i<argc;i++) {
            //!
            std::cout << azColName[i] << ": " << argv[i] << std::endl;
        }
        //! insere uma linha em branco no final
        std::cout << std::endl;
        //! Retorna sucesso
        return 0;
    }

    //! M�todo para conferir erros nas opera��es
    void confereErroBD() {
        //! confere retorno da opera��o
        if(op) {
            //!mosra mensagem de erro
            std::cout << "ERRO DE BANCO DE DADOS: " << sqlite3_errmsg(bd) << std::endl;

            //! Fecha conex�o com banco de dados depois de erro identificado
            fechaBD();
        }
    }



 public:
    //! Construtor da classe / abre a conex�o com o banco de dados
    SGBD(){
        //!Salva o resultado da opera��o de abertura do banco de dados
        op = sqlite3_open("codigoteste.db", &bd);
        //! Confere se houve erro
        confereErroBD();
    }

    //!M�todo para fechar a conex�o com o Banco de dados
    void fechaBD() {
        sqlite3_close(bd);
    }

    //! M�todo para criar Tabela
    void criarTabelas() {
        //! Salvar sql de cria��o das tabelas (s� ocorre se a tabela n�o existir antes)
        //sql = "CREATE TABLE IF NOT EXISTS PESSOAS(ID INT PRIMARY KEY NOT NULL, NOME TEXT NOT NULL);";
        sql = ("CREATE TABLE IF NOT EXISTS Usuarios ( "
               "cpf char(11) NOT NULL, "
               "senha varchar(6) NOT NULL, "
               "PRIMARY KEY(cpf)); "

                "CREATE TABLE IF NOT EXISTS CartaoCredito( "
                    "numcartao char(16) NOT NULL, "
                    "codigoverificacao char(3) NOT NULL, "
                    "validade char(5) NOT NULL, "
                    "usuario_cpf char(11) REFERENCES Usuario NOT NULL, "
                    "PRIMARY KEY(numcartao), "
                    "FOREIGN KEY(usuario_cpf) REFERENCES Usuarios(cpf)); "

                "CREATE TABLE IF NOT EXISTS Jogos( "
                    "codigojogo char(3) NOT NULL, "
                    "nomejogo varchar(40) NOT NULL, "
                    "pais varchar(15) NOT NULL, "
                    "estado char(2) NOT NULL, "
                    "cidade varchar(15) NOT NULL, "
                    "estadio varchar(30) NOT NULL, "
                    "tipo integer NOT NULL, "
                    "usuario_cpf char(11) NOT NULL, "
                    "PRIMARY KEY(codigojogo), "
                    "FOREIGN KEY(usuario_cpf) REFERENCES Usuarios(cpf)); "

                "CREATE TABLE IF NOT EXISTS Partidas( "
                    "codigopartida char(5) NOT NULL, "
                    "data char(10) NOT NULL, "
                    "horario CHAR NOT NULL, "
                    "preco double precision NOT NULL, "
                    "disponibilidade integer NOT NULL, "
                    "jogo_codigojogo char(3) NOT NULL, "
                    "PRIMARY KEY(codigopartida), "
                    "FOREIGN KEY(jogo_codigojogo) REFERENCES Jogos(codigojogo)); "

                "CREATE TABLE IF NOT EXISTS Ingressos( "
                    "codigoingresso char(5) NOT NULL, "
                    "partida_codigopartida char(5) NOT NULL, "
                    "usuario_cpf char(11) NOT NULL, "
                    "PRIMARY KEY(codigoingresso), "
                    "FOREIGN KEY(usuario_cpf) REFERENCES Usuarios(cpf), "
                    "FOREIGN KEY(partida_codigopartida) REFERENCES Partidas(codigopartida)); "
        );

        //! Executar opera��o de criar tabela
        op = sqlite3_exec(bd, sql.c_str(), callback, 0, &cMenssagemErro);

        confereErroBD();
    }

    //!M�todo para inserir dados no Banco
    void insereDado(std::string query) {

        //! Execu��o da opera��o do query no sqlite
        sqlite3_exec(bd, query.c_str(), NULL, 0, &cMenssagemErro);

        confereErroBD();
    }

    //!Método pra criar queria de insert na tabela usuario
    std::string queryInsertUsuario (Usuario usuario);

    //!M�todo para mostrar tabela
    void mostraTabela() {
        //! inserir a query de SQL no ponteiro de char
        sql = "SELECT * FROM 'PESSOAS';";
        //! Executar a query
        op = sqlite3_exec(bd, sql.c_str(), callback, NULL, NULL);

        confereErroBD();
    }

    //!M�todo para deletar linha  de dados da tabela
    void deletaLinha(std::string ID) {

        //! Contru��o de string usando asprinf()
        std::string query = ("DELETE FROM 'PESSOAS' WHERE ID = '" + ID + "';");

        //! Execu��o da opera��o do query no sqlite
        sqlite3_exec(bd, query.c_str(), NULL, 0, &cMenssagemErro);

        confereErroBD();
    }

};

#endif // SGBD_H
