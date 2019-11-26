#include "SGBD.h"

using namespace std;

//!Método pra criar queria de insert na tabela usuario
    string SGBD::queryInsertUsuario (Usuario usuario) {
        string query = "INSERT INTO Usuarios VALUES (";
        query += "'" + usuario.pegaCpf().pegaCpf() + "', ";
        query += "'" + usuario.pegaSenha().pegaSenha() + "')";
        return query;
    }


    /**Camadas de operações no banco de dados de acordo com a UML estruturada*/

    //! Cadastra Usuário
    int SGBD::insereUsuarioBD (Usuario usr, CartaoCredito cart){
        //int resultado =0;
        //string query;
        //int cpf,ncart,codver;
        //cpf = stoi( usr.pegaCpf().pegaCpf() );
        //ncart = stoi( cart.pegaNumCartao().pegaNumCartao() );
        //codver = stoi ( cart.pegaCodVer().pegaCodigo() );

        sql = "INSERT INTO Usuarios VALUES (";
        sql += " " + usr.pegaCpf().pegaCpf() + " , ";
        sql += "'" + usr.pegaSenha().pegaSenha() + "') ; ";
        sql += "INSERT INTO CartaoCredito VALUES (";
        sql += " " + cart.pegaNumCartao().pegaNumCartao() + " , ";
        sql += "'" + cart.pegaCodVer().pegaCodigo() + "', ";
        sql += "'" + cart.pegaValidade().pegaValidade() + "', ";
        sql += " " + usr.pegaCpf().pegaCpf() + " ); ";

        //cout << sql << endl;
        //! Executar operaçãoo no banco de dados
        op = sqlite3_exec(bd, sql.c_str(), NULL, 0, &cMenssagemErro);

        confereErroBD();

        return r;
    }

    //! Autentica Usuario
    int SGBD::autenticaUsuario (Usuario usr){
        int s = 0;
        sql = "SELECT COUNT (*) FROM Usuarios ";
        sql += "WHERE cpf = " + usr.pegaCpf().pegaCpf() + " ";
        sql += "AND senha = " + usr.pegaCpf().pegaCpf() + "; ";

        //! Executar operaçãoo de criar tabela
        op = sqlite3_exec(bd, sql.c_str(), callbackRetorno, &s, &cMenssagemErro);

        confereErroBD();

        return s;//retorna s>0 se o usuário e senha estiverem corretos
    }

    //! Descadastra Usuário
    int SGBD::descadastraUsuario (Usuario us){;
        sql = ("DELETE FROM Usuarios WHERE cpf = " + us.pegaCpf().pegaCpf() + " ; ");
        sql += ("DELETE FROM CartaoCredito WHERE usuario_cpf = " + us.pegaCpf().pegaCpf() + " ; ");
        sql += ("DELETE FROM Jogos WHERE usuario_cpf = '" + us.pegaCpf().pegaCpf() + "'; ");
        sql += ("DELETE FROM Partidas WHERE jogo_codigojogo = ");
        sql += ("(SELECT codigojogo FROM Jogos wHERE usuario_cpf = " + us.pegaCpf().pegaCpf() + "); ");

        //! Executar operaçãoo no banco de dados
        op = sqlite3_exec(bd, sql.c_str(), NULL, 0, &cMenssagemErro);

        confereErroBD();

        return r;
    }

    //! Retorna Informações do Jogo
    int SGBD::informaSobreJogo (Cidade cid, Estado est, Data dt1, Data dt2){
        sql = "SELECT j.nomejogo, p.codigopartida, p.data, p.horario, p.preco, j.estadio, p.disponibilidade ";
        sql += "FROM Jogos j, Partidas p ";
        //sql += "WHERE j.codigojogo = " + jg.pegaCodJogo().pegaCodigo() + " ";
        sql += "WHERE j.codigojogo = p.jogo_codigojogo ";
        sql += "AND j.nomejogo = '" + est.pegaEstado() + "' ";
        sql += "AND j.cidade = '" + cid.pegaNome() + "' ";
        sql += "AND p.data BETWEEN '" + dt1.viraStringDB() + "' AND '" + dt2.viraStringDB() + "'; "; // Definir como passar datas diferente !!

        //! Executar operaçãoo no banco de dados
        op = sqlite3_exec(bd, sql.c_str(), callback, 0, &cMenssagemErro);

        confereErroBD();

        return r;
    }

    //!Quantidade de INgressos já vendidos
    int SGBD::qtdIngressosVendidos (Partida part) {
        int s = 0;
        sql = "SELECT COUNT (*) FROM Ingressos ";
        sql += "WHERE partida_codigopartida = " + part.pegaCodigo().pegaCodigo() + "; ";

        //! Executar operaçãoo de criar tabela
        op = sqlite3_exec(bd, sql.c_str(), callbackRetorno, &s, &cMenssagemErro);

        confereErroBD();

        return s;//retorna s>0 se o usuário e senha estiverem corretos
    }

    //! Compra Ingressos
    int SGBD::compraIngresso (Usuario usr, Partida part, int qtd){
        //query para registrar ingressos comprados com cpf do usuário
        int cod = qtdIngressosVendidos(part);
        for (int i=0;i<qtd;i++) {
            sql = "INSERT INTO Ingressos (codigoingresso, partida_codigopartida, usuario_cpf) ";
            sql += "VALUES ('" + to_string(cod+1) + "','" + part.pegaCodigo().pegaCodigo() + "','" + usr.pegaCpf().pegaCpf() + "'); ";
            //mudar código do ingresso!!!
        }
        //! Executar operaçãoo de criar tabela
        op = sqlite3_exec(bd, sql.c_str(), NULL, 0, &cMenssagemErro);

        confereErroBD();

        //Query para retornar ingressos 'comprados'
        sql = "SELECT codigoingresso FROM Ingressos ";
        sql += "WHERE partida_codigopartida = " + part.pegaCodigo().pegaCodigo() + " ";
        sql += "AND usuario_cpf = " + usr.pegaCpf().pegaCpf() + "; ";
        //! Executar operaçãoo de criar tabela
        op = sqlite3_exec(bd, sql.c_str(), NULL, 0, &cMenssagemErro);

        confereErroBD();

        return r;
    }

    //!Confere se Usuário tem número máximo de jogos
    int SGBD::ConfereMaxJogo (Usuario usr) {
        int s = 0;
        sql = "SELECT COUNT (*) FROM Jogos ";
        sql += "WHERE usuario_cpf = " + usr.pegaCpf().pegaCpf() + "; ";

        //! Executar operaçãoo de criar tabela
        op = sqlite3_exec(bd, sql.c_str(), callbackRetorno, &s, &cMenssagemErro);

        confereErroBD();

        return s;//retorna s>0 se o usuário e senha estiverem corretos

    }

    //! Cadastra Jogo
    int SGBD::insereJogo (Jogo jg, Partida part, Usuario usr, int qtd){
        int i = ConfereMaxJogo(usr);
        if(i <= 4 ) {
            sql = "INSERT INTO Jogos VALUES (";
            sql += " " + jg.pegaCodJogo().pegaCodigo() + " , ";
            sql += "'" + jg.pegaNomeJogo().pegaNome() + "', ";
            sql += "'" + jg.pegaEstado().pegaEstado() + "', ";
            sql += "'" + jg.pegaCidade().pegaNome() + "', ";
            sql += "'" + jg.pegaEstadio().pegaNome() + "', ";
            sql += " " +  to_string(jg.pegaTipo().pegaTipo() ) + " , ";
            sql += " " + usr.pegaCpf().pegaCpf() + " ); ";
            for (int cont=0;cont<qtd;cont++) {
                sql += "INSERT INTO Partidas VALUES (";
                sql += " " + part.pegaCodigo().pegaCodigo() + " , ";
                sql += "'" + part.pegaData().viraStringDB() + "', ";
                sql += "'" + part.pegaHorario().viraString() + "', ";
                sql += " " + to_string(part.pegaPreco().pegaPreco() ) + " , ";
                sql += "'" + to_string(part.pegaDisp().pegaDisp() ) + "', ";
                sql += " " + jg.pegaCodJogo().pegaCodigo() + " ); ";
            }
            //! Executar operaçãoo no banco de dados
            op = sqlite3_exec(bd, sql.c_str(), NULL, 0, &cMenssagemErro);

            confereErroBD();
            return r;
        }
        else {
            cout << "Jogo não Cadastrado!! Usuário excedeu o limite de 5 jogos a serem cadastrados " << endl;
            r = -1;
            return r;
        }
    }

    //! Descadastra Jogo/Partida
    int SGBD::descadastraJogo (Jogo jg){
        sql = ("DELETE FROM Jogos WHERE codigojogo = '" + jg.pegaCodJogo().pegaCodigo() + "'; ");
        sql += ("DELETE FROM Partidas WHERE jogo_codigojogo = '" + jg.pegaCodJogo().pegaCodigo() + "'; ");


        //! Executar operaçãoo no banco de dados
        op = sqlite3_exec(bd, sql.c_str(), NULL, 0, &cMenssagemErro);

        confereErroBD();

        return r;
    }

    //! Edita Jogo/Partida
    int SGBD::editaJogo (Jogo jg, Usuario usr){
        sql = "UPDATE Jogos SET ";
        sql += "codigojogo = " + jg.pegaCodJogo().pegaCodigo() + " , ";
        sql += "nomejogo = '" + jg.pegaNomeJogo().pegaNome() + "', ";
        sql += " estado = '" + jg.pegaEstado().pegaEstado() + "', ";
        sql += "cidade = '" + jg.pegaCidade().pegaNome() + "', ";
        sql += "estadio = '" + jg.pegaEstadio().pegaNome() + "', ";
        sql += "tipo = " +  to_string(jg.pegaTipo().pegaTipo() ) + " , ";
        sql += "usuario_cpf = " + usr.pegaCpf().pegaCpf() + "  ";
        sql += "WHERE codigojogo = " + jg.pegaCodJogo().pegaCodigo() + "  ";
        /* Edição de partidas
        sql += "UPDATE Partidas SET ";
        sql += "codigopartida = " + part.pegaCodigo().pegaCodigo() + " , ";
        sql += "data = '" + part.pegaData().viraString() + "', ";
        sql += "horario = '" + part.pegaHorario().viraStringDB() + "', ";
        sql += "preco = " + to_string(part.pegaPreco().pegaPreco() ) + " , ";
        sql += "disponibilidade = '" + to_string(part.pegaDisp().pegaDisp() ) + "', ";
        sql += " " + jg.pegaCodJogo().pegaCodigo() + "  ";
        sql += "WHERE jogo_codigojogo = " + jg.pegaCodJogo().pegaCodigo() + "  ";
        */


        //! Executar operaçãoo no banco de dados
        op = sqlite3_exec(bd, sql.c_str(), NULL, 0, &cMenssagemErro);

        confereErroBD();

        return r;
    }

    //! Retorna Informações de Venda de Jogo
    int SGBD::informaSobreVenda (Jogo& jg, Usuario usr){
        //Query para
        sql = "SELECT  j.nomejogo, p.codigopartida, p.disponibilidade as 'Ingressos Disponíveis' ";
        sql += "FROM Jogos j, Partidas p ";
        sql += "WHERE  p.jogo_codigojogo = " + jg.pegaCodJogo().pegaCodigo() + "; ";
        //Query para retornar quantidade de ingressos vendidos
        sql += "SELECT count(*) AS 'Quantidade de Ingressos da Partida Comprados' ";
        sql += "FROM Ingressos i, Partidas p ";
        sql += "WHERE i.usuario_cpf is not null ";
        sql += "AND i.partida_codigopartida = (SELECT codigopartida From Partidas "
        sql += "WHERE jogo_codigojogo = "+ part.pegaCodigo().pegaCodigo() + "); ";
        sql += "AND p.jogo_codigojogo = " + jg.pegaCodJogo().pegaCodigo() + "; ";
        //query para retornar os cpfs dos compradores
        sql += "SELECT i.usuario_cpf AS 'CPFs dos compradores'  ";
        sql += "FROM Ingressos i, Partidas p ";
        sql += "WHERE  i.usuario_cpf is not null ";
        sql += "AND p.jogo_codigojogo = " + jg.pegaCodJogo().pegaCodigo() + "; ";

        //! Executar operaçãoo no banco de dados
        op = sqlite3_exec(bd, sql.c_str(), callback, 0, &cMenssagemErro);

        confereErroBD();

        return r;
    }
