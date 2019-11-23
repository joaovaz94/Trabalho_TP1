//!Trabalho desenvolvido por:
//!Jo�o Paulo Vaz Mendes - Matr�cula: 170002934
//!Lucas de Moura Quadros - Matr�cula: 140150668

#include "testes.h"

using namespace std;

/** Defini��es dos m�todos da classe TestesUnidade */
void TestesUnidade::executaTestesUnidade() {
        //!Execu��o dos Testes de Unidade dos Dom�nios
        testeData.executar();
        testeCpf.executar();
        testeHorario.executar();
        testeCodigo.executar();
        testePreco.executar();
        testeDisp.executar();
        testeSenha.executar();
        testeCodVer.executar();
        testeCodJogo.executar();
        testeCodIng.executar();
        testeEstado.executar();
        testeNumCartao.executar();
        testeValidade.executar();
        testeNomeJogo.executar();
        testeCidade.executar();
        testeTipo.executar();
}
void TestesUnidade::imprimeExecutaTestesUnidade() {
    //!Execu��o dos Testes de Unidade dos Dom�nios
    switch(testeData.executar()){
        case TUData::SUCESSO: cout << "==  TESTE DE UNIDADE DE DATA: SUCESSO ==" << endl << endl;
                                break;
        case TUData::FALHA  : cout << "==  TESTE DE UNIDADE DE DATA: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeCpf.executar()){
        case TUCpf::SUCESSO: cout << "==  TESTE DE UNIDADE DE CPF: SUCESSO ==" << endl << endl;
                                break;
        case TUCpf::FALHA  : cout << "==  TESTE DE UNIDADE DE CPF: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeHorario.executar()){
        case TUHorario::SUCESSO: cout << "==  TESTE DE UNIDADE DE HOR�RIO: SUCESSO ==" << endl << endl;
                                break;
        case TUHorario::FALHA  : cout << "==  TESTE DE UNIDADE DE HOR�RIO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeCodigo.executar()){
        case TUCodigo::SUCESSO: cout << "==  TESTE DE UNIDADE DE C�DIGO: SUCESSO ==" << endl << endl;
                                break;
        case TUCodigo::FALHA  : cout << "==  TESTE DE UNIDADE DE C�DIGO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testePreco.executar()){
        case TUPreco::SUCESSO: cout << "==  TESTE DE UNIDADE DE PRE�O: SUCESSO ==" << endl << endl;
                                break;
        case TUPreco::FALHA  : cout << "==  TESTE DE UNIDADE DE PRE�O: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeDisp.executar()){
        case TUDisp::SUCESSO: cout << "==  TESTE DE UNIDADE DE DISPONIBILIDADE: SUCESSO ==" << endl << endl;
                                break;
        case TUDisp::FALHA  : cout << "==  TESTE DE UNIDADE DE DISPONIBILIDADE: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeSenha.executar()){
        case TUSenha::SUCESSO: cout << "==  TESTE DE UNIDADE DE SENHA: SUCESSO ==" << endl << endl;
                                break;
        case TUSenha::FALHA  : cout << "==  TESTE DE UNIDADE DE SENHA: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeCodVer.executar()){
        case TUCodVer::SUCESSO: cout << "==  TESTE DE UNIDADE DE C�DIGO DE VERIFICA��O: SUCESSO ==" << endl << endl;
                                break;
        case TUCodVer::FALHA  : cout << "==  TESTE DE UNIDADE DE C�DIGO DE VERIFICA��O: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeCodJogo.executar()){
        case TUCodJogo::SUCESSO: cout << "==  TESTE DE UNIDADE DE C�DIGO DE JOGO: SUCESSO ==" << endl << endl;
                                break;
        case TUCodJogo::FALHA  : cout << "==  TESTE DE UNIDADE DE C�DIGO DE JOGO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeCodIng.executar()){
        case TUCodIng::SUCESSO: cout << "==  TESTE DE UNIDADE DE C�DIGO DE INGRESSO: SUCESSO ==" << endl << endl;
                                break;
        case TUCodIng::FALHA  : cout << "==  TESTE DE UNIDADE DE C�DIGO DE INGRESSO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeEstado.executar()){
        case TUEstado::SUCESSO: cout << "==  TESTE DE UNIDADE DE ESTADO: SUCESSO ==" << endl << endl;
                                break;
        case TUEstado::FALHA  : cout << "==  TESTE DE UNIDADE DE ESTADO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeNumCartao.executar()){
        case TUNumCartao::SUCESSO: cout << "==  TESTE DE UNIDADE DE N�MERO DO CART�O DE CR�DITO: SUCESSO ==" << endl << endl;
                                break;
        case TUNumCartao::FALHA  : cout << "==  TESTE DE UNIDADE DE N�MERO DO CART�O DE CR�DITO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeValidade.executar()){
        case TUValidade::SUCESSO: cout << "==  TESTE DE UNIDADE DA DATA DE VALIDADE: SUCESSO ==" << endl << endl;
                                break;
        case TUValidade::FALHA  : cout << "==  TESTE DE UNIDADE DA DATA DE VALIDADE: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeNomeJogo.executar()){
        case TUNomeJogo::SUCESSO: cout << "==  TESTE DE UNIDADE DO NOME DO JOGO: SUCESSO ==" << endl << endl;
                                break;
        case TUNomeJogo::FALHA  : cout << "==  TESTE DE UNIDADE DO NOME DO JOGO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeCidade.executar()){
        case TUCidade::SUCESSO: cout << "==  TESTE DE UNIDADE DA CIDADE: SUCESSO ==" << endl << endl;
                                break;
        case TUCidade::FALHA  : cout << "==  TESTE DE UNIDADE DA CIDADE: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeTipo.executar()){
        case TUTipo::SUCESSO: cout << "==  TESTE DE UNIDADE DO TIPO: SUCESSO ==" << endl << endl;
                                break;
        case TUTipo::FALHA  : cout << "==  TESTE DE UNIDADE DO TIPO: FALHA ==" << endl << endl;
                                break;
    }
}


/**Defini��es de implementa��o do Teste de Unidade do Dom�nio Data*/
//!Defini��es de constantes de TUData*/
const int TUData::SUCESSO;
const int TUData::FALHA;
const string TUData::VALOR_VALIDO = "04/11/1962";
const string TUData::VALOR_INVALIDO = "09/03/20";
//!Defini��es de m�todos da classe TU*/
void TUData::montar(){
     data = new Data();
    estado = SUCESSO;
}
void TUData::destruir(){
    delete data;
}
void TUData::testarCenarioSucesso(){
    try{
        data->defineData(VALOR_VALIDO);
        if ((data->viraString()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUData::testarCenarioFalha(){
    try{
        data->defineData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUData::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio Cpf*/
//!Defini��es de constantes de TUCpf*/
const int TUCpf::SUCESSO;
const int TUCpf::FALHA;
const  string TUCpf::VALOR_VALIDO = "52998224725";
const  string TUCpf::VALOR_INVALIDO = "98399132127";
//!Defini��es de m�todos da classe TUCpf*/
void TUCpf::montar(){
    cpf = new Cpf();
    estado = SUCESSO;
}
void TUCpf::destruir(){
    delete cpf;
}
void TUCpf::testarCenarioSucesso(){
    try{
        cpf->defineCpf(VALOR_VALIDO);
        if ((cpf->pegaCpf()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCpf::testarCenarioFalha(){
    try{
        cpf->defineCpf(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUCpf::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio Hor�rio*/
//!Defini��es de constantes de TUHorario*/
const int TUHorario::SUCESSO;
const int TUHorario::FALHA;
const string TUHorario::VALOR_VALIDO = "16:43";
const string TUHorario::VALOR_INVALIDO = "1643";
//!Defini��es de m�todos da classe TUHorario*/
void TUHorario::montar(){
    horario = new Horario();
    estado = SUCESSO;
}
void TUHorario::destruir(){
    delete horario;
}
void TUHorario::testarCenarioSucesso(){
    try{
        horario->defineHorario(VALOR_VALIDO);
        if ((horario->viraString()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUHorario::testarCenarioFalha(){
    try{
        horario->defineHorario(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUHorario::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio C�digo*/
//!Defini��es de constantes de TUCodigo*/
const int TUCodigo::SUCESSO;
const int TUCodigo::FALHA;
const std::string TUCodigo::VALOR_VALIDO = "15010";
const std::string TUCodigo::VALOR_INVALIDO = " 15010";
//!Defini��es de m�todos da classe TUCodigo*/
void TUCodigo::montar(){
    codigo = new Codigo();
    estado = SUCESSO;
}
void TUCodigo::destruir(){
    delete codigo;
}
void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->defineCodigo(VALOR_VALIDO);
        if ((codigo->pegaCodigo()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCodigo::testarCenarioFalha(){
    try{
        codigo->defineCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUCodigo::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio Pre�o*/
//!Defini��es de constantes de TUPreco*/
const int TUPreco::SUCESSO;
const int TUPreco::FALHA;
const double TUPreco::VALOR_VALIDO = 200.05;
const double TUPreco::VALOR_INVALIDO = -30.00;
//!Defini��es de m�todos da classe TUPreco*/
void TUPreco::montar(){
    preco = new Preco();
    estado = SUCESSO;
}
void TUPreco::destruir(){
    delete preco;
}
void TUPreco::testarCenarioSucesso(){
    try{
        preco->definePreco(VALOR_VALIDO);
        if ((preco->pegaPreco()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUPreco::testarCenarioFalha(){
    try{
        preco->definePreco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUPreco::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio de Disponibilidade
*/
//!Defini��es de constantes de TUDisp*/
const int TUDisp::SUCESSO;
const int TUDisp::FALHA;
const  int TUDisp::VALOR_VALIDO;
const  int TUDisp::VALOR_INVALIDO;
//!Defini��es de m�todos da classe TUDisp*/
void TUDisp::montar(){
    disp = new Disponibilidade();
    estado = SUCESSO;
}
void TUDisp::destruir(){
    delete disp;
}
void TUDisp::testarCenarioSucesso(){
    try{
        disp->defineDisp(VALOR_VALIDO);
        if ((disp->pegaDisp()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUDisp::testarCenarioFalha(){
    try{
        disp->defineDisp(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUDisp::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio Senha*/
//!Defini��es de constantes de TUSenha*/
const int TUSenha::SUCESSO;
const int TUSenha::FALHA;
const  string TUSenha::VALOR_VALIDO = "aBc123";
const  string TUSenha::VALOR_INVALIDO = "1234";
//!Defini��es de m�todos da classe TUSenha*/
void TUSenha::montar(){
    senha = new Senha();
    estado = SUCESSO;
}
void TUSenha::destruir(){
    delete senha;
}
void TUSenha::testarCenarioSucesso(){
    try{
        senha->defineSenha(VALOR_VALIDO);
        if ((senha->pegaSenha()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUSenha::testarCenarioFalha(){
    try{
        senha->defineSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUSenha::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio CodigoVerificacao*/
//!Defini��es de constantes de TUCodVer*/
const int TUCodVer::SUCESSO;
const int TUCodVer::FALHA;
const  string TUCodVer::VALOR_VALIDO = "543";
const  string TUCodVer::VALOR_INVALIDO = "123a";
//!Defini��es de m�todos da classe TUCodVer*/
void TUCodVer::montar(){
    codigo = new CodigoVerificacao();
    estado = SUCESSO;
}
void TUCodVer::destruir(){
    delete codigo;
}
void TUCodVer::testarCenarioSucesso(){
    try{
        codigo->defineCodVer(VALOR_VALIDO);
        if ((codigo->pegaCodigo()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCodVer::testarCenarioFalha(){
    try{
        codigo->defineCodVer(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUCodVer::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio CodigoJogo*/
//!Defini��es de constantes de TUCodJogo*/
const int TUCodJogo::SUCESSO;
const int TUCodJogo::FALHA;
const  string TUCodJogo::VALOR_VALIDO = "543";
const  string TUCodJogo::VALOR_INVALIDO = "a456";
//!Defini��es de m�todos da classe TUCodJogo*/
void TUCodJogo::montar(){
    codigo = new CodigoJogo();
    estado = SUCESSO;
}
void TUCodJogo::destruir(){
    delete codigo;
}
void TUCodJogo::testarCenarioSucesso(){
    try{
        codigo->defineCodJogo(VALOR_VALIDO);
        if ((codigo->pegaCodigo()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCodJogo::testarCenarioFalha(){
    try{
        codigo->defineCodJogo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUCodJogo::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio CodigoIngresso*/
//!Defini��es de constantes de TUCodIng*/
const int TUCodIng::SUCESSO;
const int TUCodIng::FALHA;
const  string TUCodIng::VALOR_VALIDO = "00543";
const  string TUCodIng::VALOR_INVALIDO = "oo44";
//!Defini��es de m�todos da classe TUCodIng*/
void TUCodIng::montar(){
    codigo = new CodigoIngresso();
    estado = SUCESSO;
}
void TUCodIng::destruir(){
    delete codigo;
}
void TUCodIng::testarCenarioSucesso(){
    try{
        codigo->defineCodIng(VALOR_VALIDO);
        if ((codigo->pegaCodigo()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCodIng::testarCenarioFalha(){
    try{
        codigo->defineCodIng(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUCodIng::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio Estado*/
//!Defini��es de constantes de TUEstado*/
const int TUEstado::SUCESSO;
const int TUEstado::FALHA;
const  string TUEstado::VALOR_VALIDO = "PI";
const  string TUEstado::VALOR_INVALIDO = "pb4";
//!Defini��es de m�todos da classe TUEstado*/
void TUEstado::montar(){
    est = new Estado();
    estado = SUCESSO;
}
void TUEstado::destruir(){
    delete est;
}
void TUEstado::testarCenarioSucesso(){
    try{
        est->defineEstado(VALOR_VALIDO);
        if ((est->pegaEstado()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUEstado::testarCenarioFalha(){
    try{
        est->defineEstado(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUEstado::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio N�mero do Cart�o de Cr�dito*/
//!Defini��es de constantes de TUNumCartao*/
const int TUNumCartao::SUCESSO;
const int TUNumCartao::FALHA;
const  string TUNumCartao::VALOR_VALIDO = "4545419514929815";
const  string TUNumCartao::VALOR_INVALIDO = " 4545419514929815";
//!Defini��es de m�todos da classe TUNumCartao*/
void TUNumCartao::montar(){
    numero = new NumCartao();
    estado = SUCESSO;
}
void TUNumCartao::destruir(){
    delete numero;
}
void TUNumCartao::testarCenarioSucesso(){
    try{
        numero->defineNumCartao(VALOR_VALIDO);
        if ((numero->pegaNumCartao()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUNumCartao::testarCenarioFalha(){
    try{
        numero->defineNumCartao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUNumCartao::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}


/**Defini��es de implementa��o do Teste de Unidade do Dom�nio Data de Validade*/
//!Defini��es de constantes de TUValidade*/
const int TUValidade::SUCESSO;
const int TUValidade::FALHA;
const  string TUValidade::VALOR_VALIDO = "05/24";
const  string TUValidade::VALOR_INVALIDO = "13-45";
//!Defini��es de m�todos da classe TUValidade*/
void TUValidade::montar(){
    validade = new Validade();
    estado = SUCESSO;
}
void TUValidade::destruir(){
    delete validade;
}
void TUValidade::testarCenarioSucesso(){
    try{
        validade->defineValidade(VALOR_VALIDO);
        if ((validade->pegaValidade()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUValidade::testarCenarioFalha(){
    try{
        validade->defineValidade(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUValidade::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio Nome do Jogo*/
//!Defini��es de constantes de TUNomeJogo*/
const int TUNomeJogo::SUCESSO;
const int TUNomeJogo::FALHA;
const  string TUNomeJogo::VALOR_VALIDO = "Avai x Paysandu";
const  string TUNomeJogo::VALOR_INVALIDO = "Bolamense  x  Ferroviario";
//!Defini��es de m�todos da classe TUNomeJogo*/
void TUNomeJogo::montar(){
    nome = new NomeJogo();
    estado = SUCESSO;
}
void TUNomeJogo::destruir(){
    delete nome;
}
void TUNomeJogo::testarCenarioSucesso(){
    try{
        nome->defineNome(VALOR_VALIDO);
        if ((nome->pegaNome()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUNomeJogo::testarCenarioFalha(){
    try{
        nome->defineNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUNomeJogo::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio Cidade*/
//!Defini��es de constantes de TUCidade*/
const int TUCidade::SUCESSO;
const int TUCidade::FALHA;
const  string TUCidade::VALOR_VALIDO = "Sao Caetano";
const  string TUCidade::VALOR_INVALIDO = "Sao . Paulo";
//!Defini��es de m�todos da classe TUCidade*/
void TUCidade::montar(){
    cidade = new Cidade();
    estado = SUCESSO;
}
void TUCidade::destruir(){
    delete cidade;
}
void TUCidade::testarCenarioSucesso(){
    try{
        cidade->defineNome(VALOR_VALIDO);
        if ((cidade->pegaNome()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUCidade::testarCenarioFalha(){
    try{
        cidade->defineNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUCidade::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}

/**Defini��es de implementa��o do Teste de Unidade do Dom�nio de Tipo
*/
//!Defini��es de constantes de TUTipo*/
const int TUTipo::SUCESSO;
const int TUTipo::FALHA;
const  int TUTipo::VALOR_VALIDO;
const  int TUTipo::VALOR_INVALIDO;
//!Defini��es de m�todos da classe TUDisp*/
void TUTipo::montar(){
    tipo = new Tipo();
    estado = SUCESSO;
}
void TUTipo::destruir(){
    delete tipo;
}
void TUTipo::testarCenarioSucesso(){
    try{
        tipo->defineTipo(VALOR_VALIDO);
        if ((tipo->pegaTipo()) != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        estado = FALHA;
    }
}
void TUTipo::testarCenarioFalha(){
    try{
        tipo->defineTipo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument excecao){
        return;
    }
}
int TUTipo::executar(){
    montar();
    testarCenarioSucesso();
    testarCenarioFalha();
    destruir();
    return estado;
}
