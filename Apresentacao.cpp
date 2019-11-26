#include "Apresentacao.h"
#include <windows.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include "entidades.h"
#include "service.h"

Servicos servicos;

using namespace std;

void Apresentacao::operacao_invalida(){
        cout << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "----------------!!!  Operação Invalida  !!!----------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << endl;
        cout << endl;
}

void Apresentacao::programa_encerrado(){

            cout << endl;
            cout << "------------------------------------------------------------" << endl;
            cout << "----------------!!!  Programa Encerrado  !!!----------------" << endl;
            cout << "------------------------------------------------------------";// << endl;
            cout << endl;
            cout << endl;
}

void Apresentacao::cabecalho() {
    cout << endl;
    cout << "***********************************************************" << endl;
    cout << "********* PROGRAMA DE VENDA DE INGRESSOS DE JOGOS *********" << endl;
    cout << "***********************************************************" << endl;
    cout << endl;
}

void Apresentacao::pressione_continuar(){
            cout << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << "---------- Pressione qualquer tecla pra continuar ---------" << endl;
            cout << "-----------------------------------------------------------" << endl;

            getch();
}

void Apresentacao::flash() {
    for(int i=0;i<25;i++) {
        cout << "###########################################################" << endl;
    }
}

void Apresentacao::tela_inicial() {
    char op;

        cout << "***********************************************************" << endl;
        cout << "***BEM-VINDO AO PROGRAMA DE VENDA DE INGRESSOS DE JOGOS****" << endl;
        cout << "***********************************************************" << endl;
        cout << endl;
        cout << "           - Escolha uma Operação -" << endl;
        cout << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "--- LogIn: Digite '1'" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "--- Cadastrar: Digite '2'" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "--- Fechar Programa: Digite '0'" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "   Operação:";
        cin >> op;

        //return op;

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
            this->tela_inicial();
        }


}

void Apresentacao::tela_login() {
    string cpf,senha;
    /*serviço
    Usuario usr;
    CartaoCredito cart;
    */
    this->cabecalho();
    cout << "           - Para fazer operações faça o Login -" << endl;
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

    servicos.AutenticarUsuario(cpf,senha);

    //servicos.AutenticarUsuario(string cpf, string senha);

    /*serviço
    usr.defineCpf(cpf);
    usr.defineSenha(senha);
    */

    //Se bem sucedido
    system("cls");
    flash();
    system("cls");
    this->tela_usuario_autenticado();
}



void Apresentacao::tela_cadastro_usuario() {
    string cpf,senha,numCart,cvc,validade;
    /*serviço
    Usuario usr;
    Cpf c1;
    Senha s1;
    CartaoCredito cart;
    NumCartao n1;
    CodigoVerificacao cv1;
    Validade v1;
    //serviço */
    char c;
    this->cabecalho();
    cout << "       - Forneça os Dados para Realizar o Cadastro -" << endl;
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
    cout << "--- Agora cadastre seu Cartão de Crédito:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   Número do Cartão de Crédito: ";
    cin >> numCart;
    cout << endl;
    cout << "   Código de Verificação: ";
    cin >> cvc;
    cout << endl;
    cout << "   Validade do Cartão: ";
    cin >> validade;
    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados do Usuário:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   cpf: " << cpf << endl;
    cout << "   senha: " << senha << endl;
    cout << "   Número do Cartão: " << numCart << endl;
    cout << "   Código de Verificação: " << cvc << endl;
    cout << "   Validade do Cartão: " << validade << endl;

        confima_cadastro_usuario:cout << "-----------------------------------------------------------" << endl;
        cout << "------------------ Confirma Dados?  (S/N)------------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            cout << endl;

            /*Serviço
            c1.defineCpf(cpf);
            usr.defineCpf(c1);
            s1.defineSenha(senha);
            usr.defineSenha(s1);
            n1.defineNumCartao(numCart);
            cart.defineNumCartao(n1);
            cv1.defineCodigo(cvc);
            cart.defineCodVer(cv1);
            v1.defineValidade(validade);
            cart.defineValidade(v1);
            //BD

            //Serviço*/
            servicos.CadastrarUsuario(cpf,senha,numCart,cvc,validade);
            cout << "###############   Usuário Cadastrado   ####################" << endl;
            cout << endl;
            cout << "##############   Pode efetuar seu login   #################" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_inicial();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*****************  Usuário Não Cadastrado *****************" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_inicial();
        }
        else {
            this->operacao_invalida();
            goto confima_cadastro_usuario;
        }

}


/*
void ApresentacaoUsuario::cadastrar(){
    string cpf,senha,numCart,cvc,validade;
    char c;
    tui.cabecalho();
    cout << "       - Forneça os Dados para Realizar o Cadastro -" << endl;
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
    cout << "--- Agora cadastre seu Cartão de Crédito:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   Número do Cartão de Crédito: ";
    cin >> numCart;
    cout << endl;
    cout << "   Código de Verificação: ";
    cin >> cvc;
    cout << endl;
    cout << "   Validade do Cartão: ";
    cin >> validade;
    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados do Usuário:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   cpf: " << cpf << endl;
    cout << "   senha: " << senha << endl;
    cout << "   Número do Cartão: " << numCart << endl;
    cout << "   Código de Verificação: " << cvc << endl;
    cout << "   Validade do Cartão: " << validade << endl;

        confima_cadastro_usuario:cout << "-----------------------------------------------------------" << endl;
        cout << "------------------ Confirma Dados?  (S/N)------------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            cout << endl;
            cout << "###############   Usuário Cadastrado   ####################" << endl;
            cout << endl;
            cout << "##############   Pode efetuar seu login   #################" << endl;
            tui.pressione_continuar();
            system("cls");
            tui.tela_inicial();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*****************  Usuário Não Cadastrado *****************" << endl;
            tui.pressione_continuar();
            system("cls");
            tui.tela_inicial();
        }
        else {
            tui.operacao_invalida();
            goto confima_cadastro_usuario;
        }

}
*/

void Apresentacao::tela_usuario_autenticado() {
    char op;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "------------------   Usuário Logado   ---------------------" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "           - Escolha uma Operação -" << endl;
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Informações de Jogos: Digite '1'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Comprar Ingressos: Digite '2'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Gerenciar Jogos: Digite '3'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Descadastrar Usuário: Digite '4'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Deslogar: Digite '5'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Fechar Programa: Digite '0'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   Operação:";
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
            //operação de deslogar
            cout << "-----------------------------------------------------------" << endl;
            cout << "-----------------   Usuário Deslogado   -------------------" << endl;
            cout << "-----------------------------------------------------------" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_inicial();
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

void Apresentacao::tela_descadastro_usuario() {
    char c;
    string dado="dado - exemplo";
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados do Usuário:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    //mostrar informações do usuario !!!
    cout << endl;
    cout << "   cpf: " << dado << endl;
    cout << "   senha: " << dado << endl;
    cout << "   Número do Cartão: " << dado << endl;
    cout << "   Código de Verificação: " << dado << endl;
    cout << "   Validade do Cartão: " << dado << endl;

    confima_descadastro_usuario:cout << "-----------------------------------------------------------" << endl;
        cout << "-------------- Confirma Descadastro?  (S/N) ---------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            servicos.DescadastrarUsuario();
            cout << endl;
            cout << "****************  !!Usuário Descadastrado!! ***************" << endl;
            cout << endl;
            cout << "#############   Voltando à tela de Início   ###############" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_inicial();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*******************  Operação Cancelada *******************" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_usuario_autenticado();
        }
        else {
            this->operacao_invalida();
            goto confima_descadastro_usuario;
        }

}

void Apresentacao::tela_informacoes_jogo(){
    char c;
    string estado,cidade,data_inicio,data_termino;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "-----------------   Informações de Jogos   ----------------" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "          - Forneça os Dados para Procurar jogos -         " << endl;
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
    cout << "   data de início da busca: ";
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
    cout << "   Data de início da busca: " << data_inicio << endl;
    cout << "   Data de final da busca: " << data_termino << endl;

    confima_busca_jogos:cout << "-----------------------------------------------------------" << endl;
        cout << "------------------- Confirma Busca?  (S/N) ----------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            servicos.ConsultaJogos(data_inicio,data_termino,cidade,estado);
            cout << endl;
            cout << "######################   Buscando   #######################" << endl;
            //função buscando jogos !!!
            this->pressione_continuar();

            system("cls");
            cout << "-----------------------------------------------------------" << endl;
            cout << "--- Jogos Encontrados: " << endl;
            cout << "-----------------------------------------------------------" << endl;
            // Função para retornar jogos!!!
            cout << "##########   Voltando às Operações do Usuário   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_usuario_autenticado();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*******************  Operação Cancelada *******************" << endl;
            cout << endl;
            cout << "##########   Voltando às Operações do Usuário   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_usuario_autenticado();
        }
        else {
            this->operacao_invalida();
            goto confima_busca_jogos;
        }
    //implementar função para direcionar compra de ingreçõs a partir de informações aqui!!
}

void Apresentacao::tela_comprar_ingresso(){
    char c;
    string cod;
    int qtd;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "------------------   Comprar Ingressos   ------------------" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "         - Forneça os Dados para Comprar Ingressos -       " << endl;
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "---  Dados de Compra:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   Código da Partida: ";
    cin >> cod;
    cout << endl;
    cout << "   Qunatidade de Ingressos: ";
    cin >> qtd;

    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados de Compra de Ingressos:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   Código da Partida: " << cod << endl;
    cout << "   Quantidade de Ingressos: " << qtd << endl;

    confima_compra_ingressos:cout << "-----------------------------------------------------------" << endl;
        cout << "------------------ Confirmar Compra?  (S/N) ---------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            servicos.ComprarIngressos(cod,qtd);
            cout << endl;
            cout << "######################   Comprando   ######################" << endl;
            //função gerando Ingressos !!!
            this->pressione_continuar();

            system("cls");
            cout << "-----------------------------------------------------------" << endl;
            cout << "--- Ingressos Comprados: " << endl;
            cout << "-----------------------------------------------------------" << endl;
            // Função para retornar jogos!!!
            // Função para alterar disponibilidade!!!
            cout << "##########   Voltando às Operações do Usuário   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_usuario_autenticado();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*******************  Operação Cancelada *******************" << endl;
            cout << endl;
            cout << "##########   Voltando às Operações do Usuário   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            this->tela_usuario_autenticado();
        }
        else {
            this->operacao_invalida();
            goto confima_compra_ingressos;
        }
}

void Apresentacao::tela_gerenciar_jogos(){
    char op;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "------------------   Gerenciar Jogos   --------------------" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "           - Escolha uma Operação -" << endl;
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Informações de Venda de Seus Jogos: Digite '1'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Cadastrar Jogos: Digite '2'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Editar Jogos: Digite '3'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Descadastrar Jogo: Digite '4'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Voltar ao menu do Usuário: Digite '5'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Fechar Programa: Digite '0'" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   Operação:";
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
            cout << "##########   Voltando às Operações do Usuário   ###########" << endl;
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

void Apresentacao::tela_informacoes_venda(){
    char op;
    string dado="dado - exemplo";
    int n=5;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Informações de Vendas dos Jogos:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "           - Escolha um dos Jogos cadastrados: -" << endl;
    cout << endl;
    // Função para Pesquisar jogos associados ao usuário !!!
    cout << endl;
    if(n>0) {
        for(int i=0;i<n;i++){
            cout << "   Código: " << dado << " - Nome: " << dado << endl;
            cout << "   Digite '" << (i+1) << "'" << endl;
            cout << endl;
        }
        cout << "   Para voltar ao menu de Gerenciamento de Jogos " << endl;
        cout << "   Digite '0'" << endl;
        cout << endl;
        escolhe_jogo_vendas:cout << "   Escolha Jogo para ver Informações de vendas: ";
        cin >> op;
        if(op == '0'){
            cout << endl;
            cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
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
        cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
        this->pressione_continuar();
        system("cls");
        flash();
        system("cls");
        this->tela_gerenciar_jogos();
    }

}

void Apresentacao::tela_cadastro_jogo(){
    string cod_jg,Nome,cod_part,data,hrr,estadio,cidade,estado;
    double prc;
    int n;
    char c;
    this->cabecalho();
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Cadastrar Jogo ---" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "       - Forneça os Dados para Realizar o Cadastro -" << endl;
    cout << endl;
    cout << endl;
    cout << "   Código do Jogo: ";
    cin >> cod_jg;
    cout << endl;
    cout << "   Nome do Jogo: ";
    cin >> Nome;
    cout << endl;
    cout << "   Estádio: ";
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
        cout << "   Código da Partida " <<  (i+1) <<": ";
        cin >> cod_part;
        cout << endl;
        cout << "   Data da Partida " <<  (i+1) <<": ";
        cin >> data;
        cout << endl;
        cout << "   Horário da Partida " <<  (i+1) <<": ";
        cin >> hrr;
        cout << endl;
        cout << "   Preço do Ingreço da Partida " <<  (i+1) <<": ";
        cin >> prc;
        cout << endl;

        servicos.CadastrarJogo(cod_jg,Nome,estadio,cidade,estado,cod_part,data,hrr,prc,n);

    }
    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados do Jogo:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   Código do Jogo: " << cod_jg << endl;
    cout << "   Nome do Jogo: " << Nome << endl;
    cout << "   Estádio: " << estadio << endl;
    cout << "   Cidade: " << cidade << endl;
    cout << "   Estado: " << estado << endl;
    cout << "   Quantidade de Partidas do Jogo: " << n << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados das Partidas:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    for(int i=0;i<n;i++) {
        cout << endl;
        cout << "   --- Partida " <<  (i+1) <<": " << endl;
        cout << "   Código da Partida " <<  (i+1) <<": " << cod_part << endl;
        cout << "   Data da Partida " <<  (i+1) <<": " << data << endl;
        cout << "   Horário da Partida " <<  (i+1) <<": " << hrr << endl;
        cout << "   Preço do Ingreço da Partida " <<  (i+1) <<": " << prc << endl;
    }

        confima_cadastro_jogo:cout << "-----------------------------------------------------------" << endl;
        cout << "------------------ Confirma Dados?  (S/N)------------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            cout << endl;
            cout << "#################   Jogo Cadastrado   #####################" << endl;
            cout << endl;
            cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*******************  Jogo Não Cadastrado ******************" << endl;
            cout << endl;
            cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
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

void Apresentacao::tela_edita_jogo(){
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
    // Função para Pesquisar jogos associados ao usuário !!!
    cout << endl;
    if(n>0) {
        for(int i=0;i<n;i++){
            cout << "   Código: " << dado << " - Nome: " << dado << endl;
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
            cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
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
        cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
        this->pressione_continuar();
        system("cls");
        flash();
        system("cls");
        this->tela_gerenciar_jogos();
    }
}

void Apresentacao::tela_descadastro_jogo(){
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
    // Função para Pesquisar jogos associados ao usuário !!!
    cout << endl;
    if(n>0) {
        for(int i=0;i<n;i++){
            cout << "   Código: " << dado << " - Nome: " << dado << endl;
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
            cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
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
        cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
        this->pressione_continuar();
        system("cls");
        flash();
        system("cls");
        this->tela_gerenciar_jogos();
    }

}

void Apresentacao::jogo_descadastra(){
    char c;
    string dado="dado - exemplo";
    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados do Jogo:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   Código do Jogo: " << dado << endl;
    cout << "   Nome do Jogo: " << dado << endl;
    cout << "   Estado: " << dado << endl;
    cout << "   Cidade: " << dado << endl;
    cout << "   Estádio: " << dado << endl;
    cout << "   Tipo: " << dado << endl;


    jogo_descadastro:cout << "-----------------------------------------------------------" << endl;
        cout << "--------------- Confirmar Descadastro?  (S/N) -------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {
            //Função de descadastro do jogo
            cout << endl;
            cout << "****************  !!Jogo Descadastrado!! ***************" << endl;
            cout << endl;
            cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*******************  Operação Cancelada *******************" << endl;
            cout << endl;
            cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
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

void Apresentacao::jogo_edita(){
    string cod_jg,Nome,cod_ing,data,hrr,prc,estadio,cidade,estado;
    int n=1;
    char op,c;

    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Dados do Jogo:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   Código do Jogo: " << cod_jg << endl;
    cout << "   Nome do Jogo: " << Nome << endl;
    cout << "   Estádio: " << estadio << endl;
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
        cout << "   Código do Ingresso da Partida " <<  (i+1) <<": " << cod_ing << endl;
        cout << "   Data da Partida " <<  (i+1) <<": " << data << endl;
        cout << "   Horário da Partida " <<  (i+1) <<": " << hrr << endl;
        cout << "   Preço do Ingreço da Partida " <<  (i+1) <<": " << prc << endl;
    }
    */
    cout << endl;
    cout << endl;
    cout << "           - Escolha um atributo do Jogo para Editar: -" << endl;
    cout << endl;
    cout << "   Para voltar ao menu de Gerenciamento de Jogos: Digite '0'"<< endl;
    cout << endl;
    cout << "   Editar Código do Jogo: Digite '1'" << endl;
    cout << endl;
    cout << "   Editar Nome do Jogo: Digite '2'" << endl;
    cout << endl;
    cout << "   Editar Estádio: Digite '3'" << endl;
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
            cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else if( op=='1')  {
            cout << "   Código do Jogo: ";
            cin >> cod_jg;
            cout << endl;
        }
        else if( op=='2')  {
                cout << "   Nome do Jogo: ";
                cin >> Nome;
                cout << endl;
        }
        else if( op=='3')  {
            cout << "   Estádio: ";
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
        cout << "   Código do Jogo: " << cod_jg << endl;
        cout << "   Nome do Jogo: " << Nome << endl;
        cout << "   Estádio: " << estadio << endl;
        cout << "   Cidade: " << cidade << endl;
        cout << "   Estado: " << estado << endl;
        cout << "   Quantidade de Partidas do Jogo: " << n << endl;

        confima_atributo_edita:cout << "-----------------------------------------------------------" << endl;
        cout << "------------------ Confirmar Edição?  (S/N) ---------------" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> c;
        if (c=='s' || c=='S') {

            system("cls");
            cout << "-----------------------------------------------------------" << endl;
            cout << "********************  !!Jogo Editado!! ********************" << endl;
            cout << "-----------------------------------------------------------" << endl;
            cout << endl;
            cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
            this->pressione_continuar();
            system("cls");
            flash();
            system("cls");
            this->tela_gerenciar_jogos();
        }
        else if (c=='n' || c=='N'){
            cout << endl;
            cout << "*******************  Operação Cancelada *******************" << endl;
            cout << endl;
            cout << "##########   Voltando às Operações de Jogos   ###########" << endl;
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

void Apresentacao::jogo_vendas(){
    string dado="dado - exemplo";
    system("cls");
    cout << "-----------------------------------------------------------" << endl;
    cout << "--- Informações de Vendas do Jogo:" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    cout << "   Código do Jogo: " << dado << endl;
    cout << "   Nome do Jogo: " << dado << endl;
    cout << "   Partida: " << dado << endl;
    cout << "   Quantidade de ingressos vendidos: " << dado << endl;
    cout << "   Quantidade de ingressos disponíveis: " << dado << endl;
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "   CPF dos compradores dos ingressos: " << endl;
    cout << "-----------------------------------------------------------" << endl;
    // Função para mostrar dados dos compradores dos ingressos!!!
}
