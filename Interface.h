#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>

class Interface
{
    private:
        char operacao;

    public:
        Interface() {}
        static Interface& pegaInstancia() {//Singleton
            static Interface instancia;
            return instancia;
        }

        Interface(Interface const&) = delete;//Singleton
        void operador() = delete;//Singleton

        void iniciar();
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

#endif // INTERFACE_H
