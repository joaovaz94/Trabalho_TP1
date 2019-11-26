#include "Interface.h"

using namespace std;

void Interface::iniciarPrograma() {
    bancoDeDados.criarTabelas();
    operacao = tui.tela_inicial();
    this->operacaoInicial(operacao);

    //bancoDeDados.fechaBD(); //! Comando para fechar a conex�o do programa com o banco de dados antes de fechar o programa
}

void Interface::operacaoInicial(char op) {
        cout << "ok" << endl;
        if(op=='1'){
            system("cls");
            tui.flash();
            system("cls");
            tui.tela_login();
        }
        else if(op=='2'){
            system("cls");
            tui.flash();
            system("cls");
            tui.tela_cadastro_usuario();
            //this->operacaoCadastro();
        }
        else if(op=='0'){
            system("cls");
            tui.flash();
            system("cls");
            tui.programa_encerrado();
        }
        else {

            tui.operacao_invalida();
            tui.pressione_continuar();
            system("cls");
            tui.flash();
            system("cls");
            tui.tela_inicial();
        }
}

void Interface::operacaoCadastro() {

}

void Interface::fecharPrograma() {
    bancoDeDados.fechaBD(); //! Comando para fechar a conex�o do programa com o banco de dados antes de fechar o programa
}
