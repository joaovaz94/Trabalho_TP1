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
        int resultado =0;

        return resultado;
    }

    //! Autentica Usuario
    int SGBD::autenticaUsuario (Usuario usr){
        int resultado =0;

        return resultado;
    }

    //! Descadastra Usuário
    int SGBD::descadastraUsuario (Usuario us){
        int resultado =0;

        return resultado;
    }

    //! Retorna Informações do Jogo
    int SGBD::informaSobreJogo (Jogo& jg, Partida& part){
        int resultado =0;

        return resultado;
    }

    //! Compra Ingressos
    int SGBD::compraIngresso (Ingresso ing, int qtd, Usuario usr){
        int resultado =0;

        return resultado;
    }

    //! Cadastra Jogo
    int SGBD::insereJogo (Jogo jg, Partida part){
        int resultado =0;

        return resultado;
    }

    //! Descadastra Jogo/Partida
    int SGBD::descadastraJogo (Jogo jg, Partida part, Usuario usr){
        int resultado =0;

        return resultado;
    }

    //! Edita Jogo/Partida
    int SGBD::editaJogo (Jogo jg, Partida part, Usuario usr){
        int resultado =0;

        return resultado;
    }

    //! Retorna Informações de Venda de Jogo
    int SGBD::informaSobreVenda (Jogo& jg, Partida& part, Usuario usr){
        int resultado =0;

        return resultado;
    }
