//!Trabalho desenvolvido por:
//!João Paulo Vaz Mendes - Matrícula: 170002934
//!Lucas de Moura Quadros - Matrícula: 140150668

#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <iostream>

/**Funções da entidade Usuario*/
class Usuario
{
 private:
        Cpf cpf;
        Senha senha;
 public:
     //!Função para definir CPF de Usuário
     void defineCpf (const Cpf& c) {
        this->cpf = c;
     }
     //!Função para retornar CPF do Usuário
     Cpf pegaCpf() const {
        return cpf;
     }
     //!Função para definir Senha do Usuário
     void defineSenha (const Senha& sn) {
        this->senha = sn;
     }
     //!Função para retornar Senha do Usuário
     Senha pegaSenha() const {
        return senha;
     }
     //!Função para imprimir informações de Usuário
     void imprimeUsuario() {
        std::cout <<"\t== Usuário Definido ==" << std::endl;
        std::cout << "Cpf: " << this->pegaCpf().pegaCpf() << std::endl;
        std::cout << "Senha: " << this->pegaSenha().pegaSenha() << std::endl;

     }
};

/**Funções da entidade Partida*/
class Partida {
 private:
        Codigo codigo;
        Data data;
        Horario hora;
        Preco preco;
        Disponibilidade dispo;
 public:
    //!Função para definir código da Partida
    void defineCodigo (const Codigo &cod) {
        this->codigo = cod;
    }
    //!Função para retornar código da Partida
    Codigo pegaCodigo() const {
        return codigo;
    }
    //!Função para definir Data da Partida
    void defineData (const Data &dt) {
        this->data = dt;
    }
    //!Função para retornar código da Partida
    Data pegaData() const {
        return data;
    }
    //!Função para definir Horário da Partida
    void defineHorario (const Horario &hr) {
        this->hora = hr;
    }
    //!Função para retornar Horário da Partida
    Horario pegaHorario() const {
        return hora;
    }
    //!Função para definir Preço da Partida
    void definePreco (const Preco &pr) {
        this->preco = pr;
    }
    //!Função para retornar Preço da Partida
    Preco pegaPreco() const {
        return preco;
    }
    //!Função para definir Disponibilidade da Partida
    void defineDisp (const Disponibilidade &dp) {
        this->dispo = dp;
    }
    //!Função para retornar Disponibilidade da Partida
    Disponibilidade pegaDisp() const {
        return dispo;
    }
    //!Função para imprimir informações de Partida
    void imprimePartida() {
        std::cout <<"\t==Partida Definida==" << std::endl;
        std::cout << "Data: " << this->pegaData().viraString() << std::endl;
        std::cout << "Horário: " << this->pegaHorario().viraString() << std::endl;
        std::cout << "Código: " << this->pegaCodigo().pegaCodigo() << std::endl;
        std::cout << "Preço: " << this->pegaPreco().pegaPreco() << std::endl;
        std::cout << "Disponibilidade: " << this->pegaDisp().pegaDisp() << std::endl;
    }
};
/**Definição de entidade Ingresso*/
class Ingresso {
 private:
        CodigoIngresso codigo;
 public:
        //!Função para definir codigo do ingresso
        void defineCodIng (const CodigoIngresso& cod) {
            this->codigo = cod;
        }
        //!Função para retornar codigo do ingresso
        CodigoIngresso pegaCodIng() const {
            return codigo;
        }
        //!Função para imprimir informações de Ingresso
        void imprimeIngresso() {
            std::cout <<"\t== Ingresso Definido ==" << std::endl;
            std::cout << "Código do Ingresso: " << this->pegaCodIng().pegaCodigo() << std::endl;
        }
};
/**Definição de entidade Cartao de Crédito*/
class CartaoCredito {
 private:
        NumCartao numero;
        CodigoVerificacao codigo;
        Validade validade;
 public:
        //!Função para definir número do cartão
        void defineNumCartao(const NumCartao& num) {
            this->numero = num;
        }
        //!Função para retornar número do cartão
        NumCartao pegaNumCartao() const {
            return numero;
        }
        //!Função para definir código de verificação do cartão
        void defineCodVer(const CodigoVerificacao& cod) {
            this->codigo = cod;
        }
        //!Função para retornar codigo de verificação do cartão
        CodigoVerificacao pegaCodVer() const {
            return codigo;
        }
        //!Função para definir validade do cartão
        void defineValidade(const Validade& val) {
            this->validade = val;
        }
        //!Função para retornar validade do cartão
        Validade pegaValidade() const {
            return validade;
        }
        //!Função para imprimir informações de cartão de crédito
        void imprimeIngresso() {
            std::cout <<"\t== Cartão de crédito Definido ==" << std::endl;
            std::cout << "Nuúmero do Cartão: " << this->pegaNumCartao().pegaNumCartao() << std::endl;
            std::cout << "Código de verificação do Cartão: " << this->pegaCodVer().pegaCodigo() << std::endl;
            std::cout << "Validade do Cartão: " << this->pegaValidade().pegaValidade() << std::endl;
        }
};
/**Definição de entidade Jogo*/
class Jogo {
 private:
        CodigoJogo codigo;
        NomeJogo nome;
        Cidade cidade;
        Estado estado;
        Tipo tipo;
 public:
    //!Função para definir Código do Jogo
    void defineCodJogo (const CodigoJogo& cod) {
        this->codigo = cod;
    }
    //!Função para retornar Código do Jogo
    CodigoJogo pegaCodJogo() const {
        return codigo;
    }
    //!Função para definir Nome do Jogo
    void defineNomeJogo (const NomeJogo& nom) {
        this->nome = nom;
    }
    //!Função para retornar Nome do Jogo
    NomeJogo pegaNomeJogo() const {
        return nome;
    }
    //!Função para definir Cidade do Jogo
    void defineCidade (const Cidade& cid) {
        this->cidade = cid;
    }
    //!Função para retornar Cidade do Jogo
    Cidade pegaCidade() const {
        return cidade;
    }
    //!Função para definir Estado do Jogo
    void defineEstado (const Estado& est) {
        this->estado = est;
    }
    //!Função para retornar Estado do Jogo
    Estado pegaEstado() const {
        return estado;
    }
    //!Função para definir Tipo do Jogo
    void defineTipo (const Tipo& tip) {
        this->tipo = tip;
    }
    //!Função para retornar Tipo do Jogo
    Tipo pegaTipo() const {
        return tipo;
    }
    //!Função para imprimir informações de Jogo
    void imprimeJogo() {
            std::cout <<"\t== Jogo Definido ==" << std::endl;
            std::cout << "Código do Jogo: " << this->pegaCodJogo().pegaCodigo() << std::endl;
            std::cout << "Nome do Jogo: " << this->pegaNomeJogo().pegaNome() << std::endl;
            std::cout << "Cidade do Jogo: " << this->pegaCidade().pegaNome() << std::endl;
            std::cout << "Estado do Jogo: " << this->pegaEstado().pegaEstado() << std::endl;
            std::cout << "Tipo do Jogo: " << this->pegaTipo().stringTipo() << std::endl;
    }
};

#endif // ENTIDADES_H_INCLUDED
