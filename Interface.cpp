#include "Interface.h"
#include <windows.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

void Interface::operacao_invalida(){
        cout << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "----------------!!!  Opera��o Invalida  !!!----------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << endl;
        cout << endl;
}

void Interface::programa_encerrado(){

            cout << endl;
            cout << "------------------------------------------------------------" << endl;
            cout << "----------------!!!  Programa Encerrado  !!!----------------" << endl;
            cout << "------------------------------------------------------------";// << endl;
            cout << endl;
            cout << endl;
}

void Interface::cabecalho() {
    cout << endl;
    cout << "***********************************************************" << endl;
    cout << "********* PROGRAMA DE VENDA DE INGRESSOS DE JOGOS *********" << endl;
    cout << "***********************************************************" << endl;
    cout << endl;
}

void Interface::pressione_continuar(){
            cout << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << "---------- Pressione qualquer tecla pra continuar ---------" << endl;
            cout << "-----------------------------------------------------------" << endl;

            getch();
}

void Interface::flash() {
    for(int i=0;i<25;i++) {
        cout << "###########################################################" << endl;
    }
}

void Interface::iniciar() {
    char op;

        cout << "***********************************************************" << endl;
        cout << "***BEM-VINDO AO PROGRAMA DE VENDA DE INGRESSOS DE JOGOS****" << endl;
        cout << "***********************************************************" << endl;
        cout << endl;
        cout << "           - Escolha uma Opera��o -" << endl;
        cout << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "--- LogIn: Digite '1'" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "--- Cadastrar: Digite '2'" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "--- Fechar Programa: Digite '0'" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "   Opera��o:";
        cin >> op;

        if(op=='1'){
            system("cls");
            flash();
            system("cls");
            this->tela_login();
        }
        else if(op=='2'){
            system("cls");
            flash();
            system("cls");
            this->tela_cadastro_usuario();
        }
        else if(op=='0'){
            system("cls");
            flash();
            system("cls");
            this->programa_encerrado();
        }
        else {

            this->operacao_invalida();
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->iniciar();
        }


}

void Interface::tela_login() {
    string cpf="",senha="";
    this->cabecalho();
    cout << "           - Para fazer opera��es fa�a o Login -" << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- LogIn:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   cpf: ";
    cin >> cpf;
    cout << endl;
    cout << "   senha: ";
    cin >> senha;
    cout << "   cpf: " << cpf << endl;
    cout << "   senha: " << senha << endl;

    //Se bem sucedido
    system("cls");
    flash();
    system("cls");
    this->tela_usuario_autenticado();
}


void Interface::tela_cadastro_usuario() {
    string cpf,senha,numCart,cvc,validade;
    char c;
    this->cabecalho();
    cout << "       - Forne�a os Dados para Realizar o Cadastro -" << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "---- Cadastro:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   cpf: ";
    cin >> cpf;
    cout << endl;
    cout << "   senha: ";
    cin >> senha;
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Agora cadastre seu Cart�o de Cr�dito:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   N�mero do Cart�o de Cr�dito: ";
    cin >> numCart;
    cout << endl;
    cout << "   C�digo de Verifica��o: ";
    cin >> cvc;
    cout << endl;
    cout << "   Validade do Cart�o: ";
    cin >> validade;
    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados do Usu�rio:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   cpf: " << cpf << endl;
    cout << "   senha: " << senha << endl;
    cout << "   N�mero do Cart�o: " << numCart << endl;
    cout << "   C�digo de Verifica��o: " << cvc << endl;
    cout << "   Validade do Cart�o: " << validade << endl;

        confima_cadastro_usuario:cout << "-----------------------------------------------------------" << endl;
        cout << "------------------ Confirma Dados?  (S/N)------------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            cout << endl;
            cout << "###############   Usu�rio Cadastrado   ####################" << endl;
            cout << endl;
            cout << "##############   Pode efetuar seu login   #################" << endl;
            this->pressione_continuar();
            system("cls");
            this->iniciar();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*****************  Usu�rio N�o Cadastrado *****************" << endl;
            this->pressione_continuar();
            system("cls");
            this->iniciar();
        }
        else {
            this->operacao_invalida();
            goto confima_cadastro_usuario;
        }

}



void Interface::tela_usuario_autenticado() {
    char op;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "------------------   Usu�rio Logado   ---------------------" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "           - Escolha uma Opera��o -" << endl;
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Informa��es de Jogos: Digite '1'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Comprar Ingressos: Digite '2'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Gerenciar Jogos: Digite '3'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Descadastrar Usu�rio: Digite '4'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Deslogar: Digite '5'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Fechar Programa: Digite '0'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   Opera��o:";
    cin >> op;

        if(op=='1'){
            system("cls");
            flash();
            system("cls");
            this->tela_informacoes_jogo();
        }
        else if(op=='2'){
            system("cls");
            flash();
            system("cls");
            this->tela_comprar_ingresso();
        }
        else if(op=='3'){
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else if(op=='4'){
            system("cls");
            flash();
            system("cls");
            this->tela_descadastro_usuario();
        }
        else if(op=='5'){
            system("cls");
            //opera��o de deslogar
            cout << "-----------------------------------------------------------" << endl;
            cout << "-----------------   Usu�rio Deslogado   -------------------" << endl;
            cout << "-----------------------------------------------------------" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->iniciar();
        }
        else if(op=='0'){
            system("cls");
            flash();
            system("cls");
            this->programa_encerrado();
        }
        else {
            this->operacao_invalida();
            this->pressione_continuar();
            system("cls");
            this->tela_usuario_autenticado();
        }

}

void Interface::tela_descadastro_usuario() {
    char c;
    string dado="dado - exemplo";
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados do Usu�rio:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    //mostrar informa��es do usuario !!!
    cout << endl;
    cout << "   cpf: " << dado << endl;
    cout << "   senha: " << dado << endl;
    cout << "   N�mero do Cart�o: " << dado << endl;
    cout << "   C�digo de Verifica��o: " << dado << endl;
    cout << "   Validade do Cart�o: " << dado << endl;

    confima_descadastro_usuario:cout << "-----------------------------------------------------------" << endl;
        cout << "-------------- Confirma Descadastro?  (S/N) ---------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            cout << endl;
            cout << "****************  !!Usu�rio Descadastrado!! ***************" << endl;
            cout << endl;
            cout << "#############   Voltando � tela de In�cio   ###############" << endl;
            this->pressione_continuar();
            system("cls");
            this->iniciar();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*******************  Opera��o Cancelada *******************" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_usuario_autenticado();
        }
        else {
            this->operacao_invalida();
            goto confima_descadastro_usuario;
        }

}

void Interface::tela_informacoes_jogo(){
    char c;
    string estado,cidade,data_inicio,data_termino;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "-----------------   Informa��es de Jogos   ----------------" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "          - Forne�a os Dados para Procurar jogos -         " << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "---  Dados de Busca:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   Estado: ";
    cin >> estado;
    cout << endl;
    cout << "   Cidade: ";
    cin >> cidade;
    cout << endl;
    cout << "   data de in�cio da busca: ";
    cin >> data_inicio;
    cout << endl;
    cout << "   data de final da busca: ";
    cin >> data_termino;

    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados de Busca de jogos:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   Estado: " << estado << endl;
    cout << "   Cidade: " << cidade << endl;
    cout << "   Data de in�cio da busca: " << data_inicio << endl;
    cout << "   Data de final da busca: " << data_termino << endl;

    confima_busca_jogos:cout << "-----------------------------------------------------------" << endl;
        cout << "------------------- Confirma Busca?  (S/N) ----------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            cout << endl;
            cout << "######################   Buscando   #######################" << endl;
            //fun��o buscando jogos !!!
            this->pressione_continuar();

            system("cls");
            cout << "-----------------------------------------------------------" << endl;
            cout << "--- Jogos Encontrados: " << endl;
            cout << "-----------------------------------------------------------" << endl;
            // Fun��o para retornar jogos!!!
            cout << "##########   Voltando �s Opera��es do Usu�rio   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_usuario_autenticado();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*******************  Opera��o Cancelada *******************" << endl;
            cout << endl;
            cout << "##########   Voltando �s Opera��es do Usu�rio   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_usuario_autenticado();
        }
        else {
            this->operacao_invalida();
            goto confima_busca_jogos;
        }
    //implementar fun��o para direcionar compra de ingre��s a partir de informa��es aqui!!
}

void Interface::tela_comprar_ingresso(){
    char c;
    string cod,qtd;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "------------------   Comprar Ingressos   ------------------" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "         - Forne�a os Dados para Comprar Ingressos -       " << endl;
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "---  Dados de Compra:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   C�digo da Partida: ";
    cin >> cod;
    cout << endl;
    cout << "   Qunatidade de Ingressos: ";
    cin >> qtd;

    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados de Compra de Ingressos:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   C�digo da Partida: " << cod << endl;
    cout << "   Quantidade de Ingressos: " << qtd << endl;

    confima_compra_ingressos:cout << "-----------------------------------------------------------" << endl;
        cout << "------------------ Confirmar Compra?  (S/N) ---------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            cout << endl;
            cout << "######################   Comprando   ######################" << endl;
            //fun��o gerando Ingressos !!!
            this->pressione_continuar();

            system("cls");
            cout << "-----------------------------------------------------------" << endl;
            cout << "--- Ingressos Comprados: " << endl;
            cout << "-----------------------------------------------------------" << endl;
            // Fun��o para retornar jogos!!!
            // Fun��o para alterar disponibilidade!!!
            cout << "##########   Voltando �s Opera��es do Usu�rio   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_usuario_autenticado();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*******************  Opera��o Cancelada *******************" << endl;
            cout << endl;
            cout << "##########   Voltando �s Opera��es do Usu�rio   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_usuario_autenticado();
        }
        else {
            this->operacao_invalida();
            goto confima_compra_ingressos;
        }
}

void Interface::tela_gerenciar_jogos(){
    char op;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "------------------   Gerenciar Jogos   --------------------" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "           - Escolha uma Opera��o -" << endl;
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Informa��es de Venda de Seus Jogos: Digite '1'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Cadastrar Jogos: Digite '2'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Editar Jogos: Digite '3'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Descadastrar Jogo: Digite '4'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Voltar ao menu do Usu�rio: Digite '5'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Fechar Programa: Digite '0'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   Opera��o:";
    cin >> op;

    if(op=='1'){
            system("cls");
            flash();
            system("cls");
            this->tela_informacoes_venda();
        }
        else if(op=='2'){
            system("cls");
            flash();
            system("cls");
            this->tela_cadastro_jogo();
        }
        else if(op=='3'){
            system("cls");
            flash();
            system("cls");
            this->tela_edita_jogo();
        }
        else if(op=='4'){
            system("cls");
            flash();
            system("cls");
            this->tela_descadastro_jogo();
        }
        else if(op=='5'){
            system("cls");
            cout << endl;
            cout << "##########   Voltando �s Opera��es do Usu�rio   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_usuario_autenticado();
        }
        else if(op=='0'){
            system("cls");
            flash();
            system("cls");
            this->programa_encerrado();
        }
        else {
            this->operacao_invalida();
            this->pressione_continuar();
            system("cls");
            this->tela_gerenciar_jogos();
        }
}

void Interface::tela_informacoes_venda(){
    char op;
    string dado="dado - exemplo";
    int n=5;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Informa��es de Vendas dos Jogos:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "           - Escolha um dos Jogos cadastrados: -" << endl;
    cout << endl;
    // Fun��o para Pesquisar jogos associados ao usu�rio !!!
    cout << endl;
    if(n>0) {
        for(int i=0;i<n;i++){
            cout << "   C�digo: " << dado << " - Nome: " << dado << endl;
            cout << "   Digite '" << (i+1) << "'" << endl;
            cout << endl;
        }
        cout << "   Para voltar ao menu de Gerenciamento de Jogos " << endl;
        cout << "   Digite '0'" << endl;
        cout << endl;
        escolhe_jogo_vendas:cout << "   Escolha Jogo para ver Informa��es de vendas: ";
        cin >> op;
        if(op == '0'){
            cout << endl;
            cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else if( (op=='1') && (n>=1))  {
            this->jogo_vendas();
        }
        else if( (op=='2') && (n>=2))  {
            this->jogo_vendas();
        }
        else if( (op=='3') && (n>=3))  {
            this->jogo_vendas();
        }
        else if( (op=='4') && (n>=4))  {
            this->jogo_vendas();
        }
        else if( (op=='5') && (n==5))  {
            this->jogo_vendas();
        }
        else {
            this->operacao_invalida();
            goto escolhe_jogo_vendas;
        }
    }
    else {
        cout << "   Nenhum Jogo Cadastrado" << endl;
        cout << endl;
        cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
        this->pressione_continuar();
        system("cls");
        flash();
        system("cls");
        this->tela_gerenciar_jogos();
    }

}

void Interface::tela_cadastro_jogo(){
    string cod_jg,Nome,cod_ing,data,hrr,prc,estadio,cidade,estado;
    int n;
    char c;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Cadastrar Jogo ---" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "       - Forne�a os Dados para Realizar o Cadastro -" << endl;
    cout << endl;
    cout << endl;
    cout << "   C�digo do Jogo: ";
    cin >> cod_jg;
    cout << endl;
    cout << "   Nome do Jogo: ";
    cin >> Nome;
    cout << endl;
    cout << "   Est�dio: ";
    cin >> estadio;
    cout << endl;
    cout << "   Cidade: ";
    cin >> cidade;
    cout << endl;
    cout << "   Estado: ";
    cin >> estado;
    cout << endl;
    cout << "   Quantidade de Partidas do Jogo: ";
    cin >> n;
    cout << endl;

    for(int i=0;i<n;i++) {
        cout << "       - Dados da Partida " << (i+1) <<" -" << endl;
        cout << endl;
        cout << "   C�digo do Ingresso da Partida " <<  (i+1) <<": ";
        cin >> cod_ing;
        cout << endl;
        cout << "   Data da Partida " <<  (i+1) <<": ";
        cin >> data;
        cout << endl;
        cout << "   Hor�rio da Partida " <<  (i+1) <<": ";
        cin >> hrr;
        cout << endl;
        cout << "   Pre�o do Ingre�o da Partida " <<  (i+1) <<": ";
        cin >> prc;
        cout << endl;
    }
    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados do Jogo:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   C�digo do Jogo: " << cod_jg << endl;
    cout << "   Nome do Jogo: " << Nome << endl;
    cout << "   Est�dio: " << estadio << endl;
    cout << "   Cidade: " << cidade << endl;
    cout << "   Estado: " << estado << endl;
    cout << "   Quantidade de Partidas do Jogo: " << n << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados das Partidas:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    for(int i=0;i<n;i++) {
        cout << endl;
        cout << "   --- Partida " <<  (i+1) <<": " << endl;
        cout << "   C�digo do Ingresso da Partida " <<  (i+1) <<": " << cod_ing << endl;
        cout << "   Data da Partida " <<  (i+1) <<": " << data << endl;
        cout << "   Hor�rio da Partida " <<  (i+1) <<": " << hrr << endl;
        cout << "   Pre�o do Ingre�o da Partida " <<  (i+1) <<": " << prc << endl;
    }

        confima_cadastro_jogo:cout << "-----------------------------------------------------------" << endl;
        cout << "------------------ Confirma Dados?  (S/N)------------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            cout << endl;
            cout << "#################   Jogo Cadastrado   #####################" << endl;
            cout << endl;
            cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*******************  Jogo N�o Cadastrado ******************" << endl;
            cout << endl;
            cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else {
            this->operacao_invalida();
            goto confima_cadastro_jogo;
        }
}

void Interface::tela_edita_jogo(){
    char op;
    string dado="dado - exemplo";
    int n=2;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Editar seus Jogos:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "           - Escolha um dos Jogos cadastrados: -" << endl;
    cout << endl;
    // Fun��o para Pesquisar jogos associados ao usu�rio !!!
    cout << endl;
    if(n>0) {
        for(int i=0;i<n;i++){
            cout << "   C�digo: " << dado << " - Nome: " << dado << endl;
            cout << "   Digite '" << (i+1) << "'" << endl;
            cout << endl;
        }
        cout << "   Para voltar ao menu de Gerenciamento de Jogos " << endl;
        cout << "   Digite '0'" << endl;
        cout << endl;
        escolhe_jogo_vendas:cout << "   Escolha um Jogo para editar: ";
        cin >> op;
        if(op == '0'){
            cout << endl;
            cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else if( (op=='1') && (n>=1))  {
            this->jogo_edita();
        }
        else if( (op=='2') && (n>=2))  {
            this->jogo_edita();
        }
        else if( (op=='3') && (n>=3))  {
            this->jogo_edita();
        }
        else if( (op=='4') && (n>=4))  {
            this->jogo_edita();
        }
        else if( (op=='5') && (n==5))  {
            this->jogo_edita();
        }
        else {
            this->operacao_invalida();
            goto escolhe_jogo_vendas;
        }
    }
    else {
        cout << "   Nenhum Jogo Cadastrado" << endl;
        cout << endl;
        cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
        this->pressione_continuar();
        system("cls");
        flash();
        system("cls");
        this->tela_gerenciar_jogos();
    }
}

void Interface::tela_descadastro_jogo(){
    char op;
    string dado="dado - exemplo";
    int n=3;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Descadastrar Jogos:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "           - Escolha um dos Jogos cadastrados: -" << endl;
    cout << endl;
    // Fun��o para Pesquisar jogos associados ao usu�rio !!!
    cout << endl;
    if(n>0) {
        for(int i=0;i<n;i++){
            cout << "   C�digo: " << dado << " - Nome: " << dado << endl;
            cout << "   Digite '" << (i+1) << "'" << endl;
            cout << endl;
        }
        cout << "   Para voltar ao menu de Gerenciamento de Jogos " << endl;
        cout << "   Digite '0'" << endl;
        cout << endl;
        escolhe_jogo_descadastra:cout << "   Escolha jogo para Descadastrar: ";
        cin >> op;
        if(op == '0'){
            cout << endl;
            cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else if( (op=='1') && (n>=1))  {
            this->jogo_descadastra();
        }
        else if( (op=='2') && (n>=2))  {
                this->jogo_descadastra();
        }
        else if( (op=='3') && (n>=3))  {
            this->jogo_descadastra();
        }
        else if( (op=='4') && (n>=4))  {
            this->jogo_descadastra();
        }
        else if( (op=='5') && (n==5))  {
            this->jogo_descadastra();
        }
        else {
            this->operacao_invalida();
            goto escolhe_jogo_descadastra;
        }
    }
    else {
        cout << "   Nenhum Jogo Cadastrado" << endl;
        cout << endl;
        cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
        this->pressione_continuar();
        system("cls");
        flash();
        system("cls");
        this->tela_gerenciar_jogos();
    }

}

void Interface::jogo_descadastra(){
    char c;
    string dado="dado - exemplo";
    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados do Jogo:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   C�digo do Jogo: " << dado << endl;
    cout << "   Nome do Jogo: " << dado << endl;
    cout << "   Estado: " << dado << endl;
    cout << "   Cidade: " << dado << endl;
    cout << "   Est�dio: " << dado << endl;
    cout << "   Tipo: " << dado << endl;


    jogo_descadastro:cout << "-----------------------------------------------------------" << endl;
        cout << "--------------- Confirmar Descadastro?  (S/N) -------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            //Fun��o de descadastro do jogo
            cout << endl;
            cout << "****************  !!Jogo Descadastrado!! ***************" << endl;
            cout << endl;
            cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*******************  Opera��o Cancelada *******************" << endl;
            cout << endl;
            cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else {
            this->operacao_invalida();
            goto jogo_descadastro;
        }
}

void Interface::jogo_edita(){
    string cod_jg,Nome,cod_ing,data,hrr,prc,estadio,cidade,estado;
    int n=1;
    char op,c;

    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados do Jogo:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   C�digo do Jogo: " << cod_jg << endl;
    cout << "   Nome do Jogo: " << Nome << endl;
    cout << "   Est�dio: " << estadio << endl;
    cout << "   Cidade: " << cidade << endl;
    cout << "   Estado: " << estado << endl;
    cout << "   Quantidade de Partidas do Jogo: " << n << endl;
    /*
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados das Partidas:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    for(int i=0;i<n;i++) {
        cout << endl;
        cout << "   --- Partida " <<  (i+1) <<": " << endl;
        cout << "   C�digo do Ingresso da Partida " <<  (i+1) <<": " << cod_ing << endl;
        cout << "   Data da Partida " <<  (i+1) <<": " << data << endl;
        cout << "   Hor�rio da Partida " <<  (i+1) <<": " << hrr << endl;
        cout << "   Pre�o do Ingre�o da Partida " <<  (i+1) <<": " << prc << endl;
    }
    */
    cout << endl;
    cout << endl;
    cout << "           - Escolha um atributo do Jogo para Editar: -" << endl;
    cout << endl;
    cout << "   Para voltar ao menu de Gerenciamento de Jogos: Digite '0'"<< endl;
    cout << endl;
    cout << "   Editar C�digo do Jogo: Digite '1'" << endl;
    cout << endl;
    cout << "   Editar Nome do Jogo: Digite '2'" << endl;
    cout << endl;
    cout << "   Editar Est�dio: Digite '3'" << endl;
    cout << endl;
    cout << "   Editar Cidade: Digite '4'"<< endl;
    cout << endl;
    cout << "   Editar Estado: Digite '5'"<< endl;
    cout << endl;
    //cout << "   Editar Quantidade de Partidas do Jogo: Digite ''" << n << endl;
    //cout << endl;
    escolhe_atributo_edita:cout << "   Escolha atributo do Jogo para Editar: ";
    cin >> op;
    if(op == '0'){
            cout << endl;
            cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else if( op=='1')  {
            cout << "   C�digo do Jogo: ";
            cin >> cod_jg;
            cout << endl;
        }
        else if( op=='2')  {
                cout << "   Nome do Jogo: ";
                cin >> Nome;
                cout << endl;
        }
        else if( op=='3')  {
            cout << "   Est�dio: ";
            cin >> estadio;
            cout << endl;
        }
        else if( op=='4')  {
            cout << "   Cidade: ";
            cin >> cidade;
            cout << endl;
        }
        else if( op=='5')  {
            cout << "   Estado: ";
            cin >> estado;
            cout << endl;
        }
        else {
            this->operacao_invalida();
            goto escolhe_atributo_edita;
        }

    if(op!=0){
        system("cls");
        cout << "-----------------------------------------------------------" << endl;
        cout << "--- Dados do Jogo:" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << endl;
        cout << "   C�digo do Jogo: " << cod_jg << endl;
        cout << "   Nome do Jogo: " << Nome << endl;
        cout << "   Est�dio: " << estadio << endl;
        cout << "   Cidade: " << cidade << endl;
        cout << "   Estado: " << estado << endl;
        cout << "   Quantidade de Partidas do Jogo: " << n << endl;

        confima_atributo_edita:cout << "-----------------------------------------------------------" << endl;
        cout << "------------------ Confirmar Edi��o?  (S/N) ---------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {

            system("cls");
            cout << "-----------------------------------------------------------" << endl;
            cout << "********************  !!Jogo Editado!! ********************" << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << endl;
            cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*******************  Opera��o Cancelada *******************" << endl;
            cout << endl;
            cout << "##########   Voltando �s Opera��es de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else {
            this->operacao_invalida();
            goto confima_atributo_edita;
        }
    }

}

void Interface::jogo_vendas(){
    string dado="dado - exemplo";
    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Informa��es de Vendas do Jogo:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   C�digo do Jogo: " << dado << endl;
    cout << "   Nome do Jogo: " << dado << endl;
    cout << "   Partida: " << dado << endl;
    cout << "   Quantidade de ingressos vendidos: " << dado << endl;
    cout << "   Quantidade de ingressos dispon�veis: " << dado << endl;
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   CPF dos compradores dos ingressos: " << endl;
    cout << "-----------------------------------------------------------" << endl;
    // Fun��o para mostrar dados dos compradores dos ingressos!!!
}
