#ifndef APRESENTACAO_H
#define APRESENTACAO_H


#include <iostream>
#include "SGBD.h"

class Apresentacao
{
    private:
        char operacao;

        //ApresentacaoUsuario usuario;
        //ApresentacaoJogo jogo;

    public:
        Apresentacao() {}
        static Apresentacao& pegaInstancia() { //Singleton
            static Apresentacao instancia;
            return instancia;
        }

        Apresentacao(Apresentacao const&) = delete;//Singleton
        void operador() = delete;//Singleton

        void tela_inicial();
        void tela_login();
        void operacao_invalida();
        void programa_encerrado();
        void cabecalho();
        void pressione_continuar();
        void flash();

        void tela_cadastro_usuario();
        void tela_usuario_autenticado();
        void tela_descadastro_usuario();
        void tela_informacoes_jogo();
        void tela_comprar_ingresso();
        void tela_gerenciar_jogos();
        void tela_cadastro_jogo();
        void tela_edita_jogo();
        void tela_descadastro_jogo();
        void tela_informacoes_venda();

        void jogo_descadastra();
        void jogo_edita();
        void jogo_vendas();

};

/*
class ApresentacaoUsuario: public Interface {
    private:
        Apresentacao tui;

    public:
        ApresentacaoUsuario() {}

        void cadastrar();
        //void editar();
        //void descadastrar() ;
        //void buscarInformacao();
};

class ApresentacaoJogo: public Interface
{
    private:
        Apresentacao tui;

    public:
        ApresentacaoJogo() {}

        //void cadastrar();
        //void editar();
        //void descadastrar();
        //void buscarInformacao();
};
*/

#endif // APRESENTACAO_H
