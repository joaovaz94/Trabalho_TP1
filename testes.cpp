//!Trabalho desenvolvido por:
//!João Paulo Vaz Mendes - Matrícula: 170002934
//!Lucas de Moura Quadros - Matrícula: 140150668

#include "testes.h"

using namespace std;

/**Definições de implementação do Teste de Unidade do Domínio Data*/
//!Definições de constantes de TUData*/
const int TUData::SUCESSO;
const int TUData::FALHA;
const string TUData::VALOR_VALIDO = "04/11/1962";
const string TUData::VALOR_INVALIDO = "09/03/20";
//!Definições de métodos da classe TU*/
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

/**Definições de implementação do Teste de Unidade do Domínio Cpf*/
//!Definições de constantes de TUCpf*/
const int TUCpf::SUCESSO;
const int TUCpf::FALHA;
const  string TUCpf::VALOR_VALIDO = "52998224725";
const  string TUCpf::VALOR_INVALIDO = "98399132127";
//!Definições de métodos da classe TUCpf*/
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

/**Definições de implementação do Teste de Unidade do Domínio Horário*/
//!Definições de constantes de TUHorario*/
const int TUHorario::SUCESSO;
const int TUHorario::FALHA;
const string TUHorario::VALOR_VALIDO = "16:43";
const string TUHorario::VALOR_INVALIDO = "1643";
//!Definições de métodos da classe TUHorario*/
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

/**Definições de implementação do Teste de Unidade do Domínio Código*/
//!Definições de constantes de TUCodigo*/
const int TUCodigo::SUCESSO;
const int TUCodigo::FALHA;
const std::string TUCodigo::VALOR_VALIDO = "15010";
const std::string TUCodigo::VALOR_INVALIDO = " 15010";
//!Definições de métodos da classe TUCodigo*/
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

/**Definições de implementação do Teste de Unidade do Domínio Preço*/
//!Definições de constantes de TUPreco*/
const int TUPreco::SUCESSO;
const int TUPreco::FALHA;
const double TUPreco::VALOR_VALIDO = 200.05;
const double TUPreco::VALOR_INVALIDO = -30.00;
//!Definições de métodos da classe TUPreco*/
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

/**Definições de implementação do Teste de Unidade do Domínio de Disponibilidade
*/
//!Definições de constantes de TUDisp*/
const int TUDisp::SUCESSO;
const int TUDisp::FALHA;
const  int TUDisp::VALOR_VALIDO;
const  int TUDisp::VALOR_INVALIDO;
//!Definições de métodos da classe TUDisp*/
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

/**Definições de implementação do Teste de Unidade do Domínio Senha*/
//!Definições de constantes de TUSenha*/
const int TUSenha::SUCESSO;
const int TUSenha::FALHA;
const  string TUSenha::VALOR_VALIDO = "aBc123";
const  string TUSenha::VALOR_INVALIDO = "1234";
//!Definições de métodos da classe TUSenha*/
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

/**Definições de implementação do Teste de Unidade do Domínio CodigoVerificacao*/
//!Definições de constantes de TUCodVer*/
const int TUCodVer::SUCESSO;
const int TUCodVer::FALHA;
const  string TUCodVer::VALOR_VALIDO = "543";
const  string TUCodVer::VALOR_INVALIDO = "123a";
//!Definições de métodos da classe TUCodVer*/
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

/**Definições de implementação do Teste de Unidade do Domínio CodigoJogo*/
//!Definições de constantes de TUCodJogo*/
const int TUCodJogo::SUCESSO;
const int TUCodJogo::FALHA;
const  string TUCodJogo::VALOR_VALIDO = "543";
const  string TUCodJogo::VALOR_INVALIDO = "a456";
//!Definições de métodos da classe TUCodJogo*/
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

/**Definições de implementação do Teste de Unidade do Domínio CodigoIngresso*/
//!Definições de constantes de TUCodIng*/
const int TUCodIng::SUCESSO;
const int TUCodIng::FALHA;
const  string TUCodIng::VALOR_VALIDO = "00543";
const  string TUCodIng::VALOR_INVALIDO = "oo44";
//!Definições de métodos da classe TUCodIng*/
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

/**Definições de implementação do Teste de Unidade do Domínio Estado*/
//!Definições de constantes de TUEstado*/
const int TUEstado::SUCESSO;
const int TUEstado::FALHA;
const  string TUEstado::VALOR_VALIDO = "PI";
const  string TUEstado::VALOR_INVALIDO = "pb4";
//!Definições de métodos da classe TUEstado*/
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

/**Definições de implementação do Teste de Unidade do Domínio Número do Cartão de Crédito*/
//!Definições de constantes de TUNumCartao*/
const int TUNumCartao::SUCESSO;
const int TUNumCartao::FALHA;
const  string TUNumCartao::VALOR_VALIDO = "4545419514929815";
const  string TUNumCartao::VALOR_INVALIDO = " 4545419514929815";
//!Definições de métodos da classe TUNumCartao*/
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


/**Definições de implementação do Teste de Unidade do Domínio Data de Validade*/
//!Definições de constantes de TUValidade*/
const int TUValidade::SUCESSO;
const int TUValidade::FALHA;
const  string TUValidade::VALOR_VALIDO = "05/24";
const  string TUValidade::VALOR_INVALIDO = "13-45";
//!Definições de métodos da classe TUValidade*/
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

/**Definições de implementação do Teste de Unidade do Domínio Nome do Jogo*/
//!Definições de constantes de TUNomeJogo*/
const int TUNomeJogo::SUCESSO;
const int TUNomeJogo::FALHA;
const  string TUNomeJogo::VALOR_VALIDO = "Avai x Paysandu";
const  string TUNomeJogo::VALOR_INVALIDO = "Bolamense  x  Ferroviario";
//!Definições de métodos da classe TUNomeJogo*/
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

/**Definições de implementação do Teste de Unidade do Domínio Cidade*/
//!Definições de constantes de TUCidade*/
const int TUCidade::SUCESSO;
const int TUCidade::FALHA;
const  string TUCidade::VALOR_VALIDO = "Sao Caetano";
const  string TUCidade::VALOR_INVALIDO = "Sao . Paulo";
//!Definições de métodos da classe TUCidade*/
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

/**Definições de implementação do Teste de Unidade do Domínio de Tipo
*/
//!Definições de constantes de TUTipo*/
const int TUTipo::SUCESSO;
const int TUTipo::FALHA;
const  int TUTipo::VALOR_VALIDO;
const  int TUTipo::VALOR_INVALIDO;
//!Definições de métodos da classe TUDisp*/
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
