//!Trabalho desenvolvido por:
//!Jo�o Paulo Vaz Mendes - Matr�cula: 170002934
//!Lucas de Moura Quadros - Matr�cula: 140150668

#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <iostream>

/**Fun��es da entidade Usuario*/
class Usuario
{
 private:
        Cpf cpf;
        Senha senha;
 public:
     //!Fun��o para definir CPF de Usu�rio
     void defineCpf (const Cpf& c) {
        this->cpf = c;
     }
     //!Fun��o para retornar CPF do Usu�rio
     Cpf pegaCpf() const {
        return cpf;
     }
     //!Fun��o para definir Senha do Usu�rio
     void defineSenha (const Senha& sn) {
        this->senha = sn;
     }
     //!Fun��o para retornar Senha do Usu�rio
     Senha pegaSenha() const {
        return senha;
     }
     //!Fun��o para imprimir informa��es de Usu�rio
     void imprimeUsuario() {
        std::cout <<"\t== Usu�rio Definido ==" << std::endl;
        std::cout << "Cpf: " << this->pegaCpf().pegaCpf() << std::endl;
        std::cout << "Senha: " << this->pegaSenha().pegaSenha() << std::endl;

     }
};

/**Fun��es da entidade Partida*/
class Partida {
 private:
        Codigo codigo;
        Data data;
        Horario hora;
        Preco preco;
        Disponibilidade dispo;
 public:
    //!Fun��o para definir c�digo da Partida
    void defineCodigo (const Codigo &cod) {
        this->codigo = cod;
    }
    //!Fun��o para retornar c�digo da Partida
    Codigo pegaCodigo() const {
        return codigo;
    }
    //!Fun��o para definir Data da Partida
    void defineData (const Data &dt) {
        this->data = dt;
    }
    //!Fun��o para retornar c�digo da Partida
    Data pegaData() const {
        return data;
    }
    //!Fun��o para definir Hor�rio da Partida
    void defineHorario (const Horario &hr) {
        this->hora = hr;
    }
    //!Fun��o para retornar Hor�rio da Partida
    Horario pegaHorario() const {
        return hora;
    }
    //!Fun��o para definir Pre�o da Partida
    void definePreco (const Preco &pr) {
        this->preco = pr;
    }
    //!Fun��o para retornar Pre�o da Partida
    Preco pegaPreco() const {
        return preco;
    }
    //!Fun��o para definir Disponibilidade da Partida
    void defineDisp (const Disponibilidade &dp) {
        this->dispo = dp;
    }
    //!Fun��o para retornar Disponibilidade da Partida
    Disponibilidade pegaDisp() const {
        return dispo;
    }
    //!Fun��o para imprimir informa��es de Partida
    void imprimePartida() {
        std::cout <<"\t==Partida Definida==" << std::endl;
        std::cout << "Data: " << this->pegaData().viraString() << std::endl;
        std::cout << "Hor�rio: " << this->pegaHorario().viraString() << std::endl;
        std::cout << "C�digo: " << this->pegaCodigo().pegaCodigo() << std::endl;
        std::cout << "Pre�o: " << this->pegaPreco().pegaPreco() << std::endl;
        std::cout << "Disponibilidade: " << this->pegaDisp().pegaDisp() << std::endl;
    }
};
/**Defini��o de entidade Ingresso*/
class Ingresso {
 private:
        CodigoIngresso codigo;
 public:
        //!Fun��o para definir codigo do ingresso
        void defineCodIng (const CodigoIngresso& cod) {
            this->codigo = cod;
        }
        //!Fun��o para retornar codigo do ingresso
        CodigoIngresso pegaCodIng() const {
            return codigo;
        }
        //!Fun��o para imprimir informa��es de Ingresso
        void imprimeIngresso() {
            std::cout <<"\t== Ingresso Definido ==" << std::endl;
            std::cout << "C�digo do Ingresso: " << this->pegaCodIng().pegaCodigo() << std::endl;
        }
};
/**Defini��o de entidade Cartao de Cr�dito*/
class CartaoCredito {
 private:
        NumCartao numero;
        CodigoVerificacao codigo;
        Validade validade;
 public:
        //!Fun��o para definir n�mero do cart�o
        void defineNumCartao(const NumCartao& num) {
            this->numero = num;
        }
        //!Fun��o para retornar n�mero do cart�o
        NumCartao pegaNumCartao() const {
            return numero;
        }
        //!Fun��o para definir c�digo de verifica��o do cart�o
        void defineCodVer(const CodigoVerificacao& cod) {
            this->codigo = cod;
        }
        //!Fun��o para retornar codigo de verifica��o do cart�o
        CodigoVerificacao pegaCodVer() const {
            return codigo;
        }
        //!Fun��o para definir validade do cart�o
        void defineValidade(const Validade& val) {
            this->validade = val;
        }
        //!Fun��o para retornar validade do cart�o
        Validade pegaValidade() const {
            return validade;
        }
        //!Fun��o para imprimir informa��es de cart�o de cr�dito
        void imprimeIngresso() {
            std::cout <<"\t== Cart�o de cr�dito Definido ==" << std::endl;
            std::cout << "Nu�mero do Cart�o: " << this->pegaNumCartao().pegaNumCartao() << std::endl;
            std::cout << "C�digo de verifica��o do Cart�o: " << this->pegaCodVer().pegaCodigo() << std::endl;
            std::cout << "Validade do Cart�o: " << this->pegaValidade().pegaValidade() << std::endl;
        }
};
/**Defini��o de entidade Jogo*/
class Jogo {
 private:
        CodigoJogo codigo;
        NomeJogo nome;
        Cidade cidade;
        Estado estado;
        Tipo tipo;
        Estadio estadio;
 public:
    //!Fun��o para definir C�digo do Jogo
    void defineCodJogo (const CodigoJogo& cod) {
        this->codigo = cod;
    }
    //!Fun��o para retornar C�digo do Jogo
    CodigoJogo pegaCodJogo() const {
        return codigo;
    }
    //!Fun��o para definir Nome do Jogo
    void defineNomeJogo (const NomeJogo& nom) {
        this->nome = nom;
    }
    //!Fun��o para retornar Nome do Jogo
    NomeJogo pegaNomeJogo() const {
        return nome;
    }
    //!Fun��o para definir Cidade do Jogo
    void defineCidade (const Cidade& cid) {
        this->cidade = cid;
    }
    //!Fun��o para retornar Cidade do Jogo
    Cidade pegaCidade() const {
        return cidade;
    }
    //!Fun��o para definir Estado do Jogo
    void defineEstado (const Estado& est) {
        this->estado = est;
    }
    //!Fun��o para retornar Estado do Jogo
    Estado pegaEstado() const {
        return estado;
    }
    //!Fun��o para definir Tipo do Jogo
    void defineTipo (const Tipo& tip) {
        this->tipo = tip;
    }
    //!Fun��o para retornar Tipo do Jogo
    Tipo pegaTipo() const {
        return tipo;
    }
        //!Fun��o para definir Est�dio do Jogo
    void defineEstadio (const Estadio& est) {
        this->estadio = est;
    }
    //!Fun��o para retornar Est�dio do Jogo
    Estadio pegaEstadio() const {
        return estadio;
    }
    //!Fun��o para imprimir informa��es de Jogo
    void imprimeJogo() {
            std::cout <<"\t== Jogo Definido ==" << std::endl;
            std::cout << "C�digo do Jogo: " << this->pegaCodJogo().pegaCodigo() << std::endl;
            std::cout << "Nome do Jogo: " << this->pegaNomeJogo().pegaNome() << std::endl;
            std::cout << "Cidade do Jogo: " << this->pegaCidade().pegaNome() << std::endl;
            std::cout << "Estado do Jogo: " << this->pegaEstado().pegaEstado() << std::endl;
            std::cout << "Tipo do Jogo: " << this->pegaTipo().stringTipo() << std::endl;
    }
};

#endif // ENTIDADES_H_INCLUDED
