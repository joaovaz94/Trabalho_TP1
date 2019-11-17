//!Trabalho desenvolvido por:
//!João Paulo Vaz Mendes - Matrícula: 170002934
//!Lucas de Moura Quadros - Matrícula: 140150668

#include <iostream>
#include "entidades.h"
#include "dominios.h"
#include "testes.h" //!inclusão dos testes de unidade no programa
#include <string>
#include <locale.h>
#include "SGBD.h"

using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL,"portuguese");//!permitir a impressão de caracteres em português


    //!Declaração dos Testes de Unidade dos Domínios
    TUData testeData;
    TUCpf testeCpf;
    TUHorario testeHorario;
    TUCodigo testeCodigo;
    TUPreco testePreco;
    TUDisp testeDisp;
    TUSenha testeSenha;
    TUCodVer testeCodVer;
    TUCodJogo testeCodJogo;
    TUCodIng testeCodIng;
    TUEstado testeEstado;
    TUNumCartao testeNumCartao;
    TUValidade testeValidade;
    TUNomeJogo testeNomeJogo;
    TUCidade testeCidade;
    TUTipo testeTipo;

    cout << endl << endl;
    //!Execução dos Testes de Unidade dos Domínios
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
        case TUHorario::SUCESSO: cout << "==  TESTE DE UNIDADE DE HORÁRIO: SUCESSO ==" << endl << endl;
                                break;
        case TUHorario::FALHA  : cout << "==  TESTE DE UNIDADE DE HORÁRIO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeCodigo.executar()){
        case TUCodigo::SUCESSO: cout << "==  TESTE DE UNIDADE DE CÓDIGO: SUCESSO ==" << endl << endl;
                                break;
        case TUCodigo::FALHA  : cout << "==  TESTE DE UNIDADE DE CÓDIGO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testePreco.executar()){
        case TUPreco::SUCESSO: cout << "==  TESTE DE UNIDADE DE PREÇO: SUCESSO ==" << endl << endl;
                                break;
        case TUPreco::FALHA  : cout << "==  TESTE DE UNIDADE DE PREÇO: FALHA ==" << endl << endl;
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
        case TUCodVer::SUCESSO: cout << "==  TESTE DE UNIDADE DE CÓDIGO DE VERIFICAÇÃO: SUCESSO ==" << endl << endl;
                                break;
        case TUCodVer::FALHA  : cout << "==  TESTE DE UNIDADE DE CÓDIGO DE VERIFICAÇÃO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeCodJogo.executar()){
        case TUCodJogo::SUCESSO: cout << "==  TESTE DE UNIDADE DE CÓDIGO DE JOGO: SUCESSO ==" << endl << endl;
                                break;
        case TUCodJogo::FALHA  : cout << "==  TESTE DE UNIDADE DE CÓDIGO DE JOGO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeCodIng.executar()){
        case TUCodIng::SUCESSO: cout << "==  TESTE DE UNIDADE DE CÓDIGO DE INGRESSO: SUCESSO ==" << endl << endl;
                                break;
        case TUCodIng::FALHA  : cout << "==  TESTE DE UNIDADE DE CÓDIGO DE INGRESSO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeEstado.executar()){
        case TUEstado::SUCESSO: cout << "==  TESTE DE UNIDADE DE ESTADO: SUCESSO ==" << endl << endl;
                                break;
        case TUEstado::FALHA  : cout << "==  TESTE DE UNIDADE DE ESTADO: FALHA ==" << endl << endl;
                                break;
    }
    switch(testeNumCartao.executar()){
        case TUNumCartao::SUCESSO: cout << "==  TESTE DE UNIDADE DE NÚMERO DO CARTÃO DE CRÉDITO: SUCESSO ==" << endl << endl;
                                break;
        case TUNumCartao::FALHA  : cout << "==  TESTE DE UNIDADE DE NÚMERO DO CARTÃO DE CRÉDITO: FALHA ==" << endl << endl;
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

    //!Declaração de objetos dos Dompinios
    Data d1;
    Cpf c1;
    Horario h1;
    Codigo cd1;
    Preco p1;
    Disponibilidade dp1;
    Senha s1;
    CodigoVerificacao cv1;
    CodigoJogo cj1;
    CodigoIngresso ci1;
    Estado e1;
    NumCartao nc1;
    Validade v1;
    NomeJogo nj1;
    Cidade cdd1;
    Tipo t1;

    //!Declaração de objetos das Entidades
    Partida part;
    Usuario usr;
    Jogo jog;
    Ingresso ing;
    CartaoCredito cart;

    string cpf = "23261322110";
    string cod = "01030";
    string dt = "23/10/1917";
    string hrr = "21:47";
    string sn = "11aA1";
    string cvc = "123";
    string cjg = "460";
    string cdi = "00539";
    string est = "AP";
    string num = "4545419514929815";
    string val = "01/23";
    string njo = "Corinthians x Botafogo";
    string cid = "Brasilia";
    int tip = 1;
    double prc=30.05;
    int dsp=30;

    //!Gestão de Banco de Dados
    SGBD bancoDeDados;
    bancoDeDados.criarTabelas();

    //!definições dos domínios
    c1.defineCpf(cpf);
    cd1.defineCodigo(cod);
    p1.definePreco(prc);
    dp1.defineDisp(dsp);
    d1.defineData(dt);
    h1.defineHorario(hrr);
    s1.defineSenha(sn);
    cv1.defineCodVer(cvc);
    cj1.defineCodJogo(cjg);
    ci1.defineCodIng(cdi);
    e1.defineEstado(est);
    nc1.defineNumCartao(num);
    v1.defineValidade(val);
    nj1.defineNome(njo);
    cdd1.defineNome(cid);
    t1.defineTipo(tip);

    //!definições de uma partida
    part.defineCodigo(cd1);
    part.defineData(d1);
    part.defineDisp(dp1);
    part.defineHorario(h1);
    part.definePreco(p1);

    //!definições de um usuário
    usr.defineCpf(c1);
    usr.defineSenha(s1);

    //!Definição de Jogo
    jog.defineCodJogo(cj1);
    jog.defineNomeJogo(nj1);
    jog.defineCidade(cdd1);
    jog.defineEstado(e1);
    jog.defineTipo(t1);

    //!Definição de Ingresso
    ing.defineCodIng(ci1);

    //!Definição de Cartão de Crédito
    cart.defineNumCartao(nc1);
    cart.defineCodVer(cv1);
    cart.defineValidade(v1);

    //!Impressão de domínios
    cout << "CPF: " << c1.pegaCpf() << endl;
    cout << "Data: " << d1.viraString() << endl;
    cout << "Horário: " << h1.viraString() << endl;
    cout << "Código: " << cd1.pegaCodigo() << endl;
    cout << "Preço: " << p1.pegaPreco() << endl;
    cout << "Disponibilidade: " << dp1.pegaDisp() << endl;
    cout << "Senha: " << s1.pegaSenha() << endl;
    cout << "Código de Verificação do Cartão: " << cv1.pegaCodigo() << endl;
    cout << "Código do Jogo: " << cj1.pegaCodigo() << endl;
    cout << "Código do Ingresso: " << ci1.pegaCodigo() << endl;
    cout << "Estado: " << e1.pegaEstado() << endl;
    cout << "Número do Cartão de Crédito: " << nc1.pegaNumCartao() << endl;
    cout << "Validade: " << v1.pegaValidade() << endl;
    cout << "Nome do Jogo: " << nj1.pegaNome() << endl;
    cout << "Cidade: " << cdd1.pegaNome() << endl;
    cout << "Tipo: " << t1.stringTipo() << endl;

    cout << endl << endl;

    //!Impressão de Partida
    part.imprimePartida();

    //!Impressão de Usuário
    usr.imprimeUsuario();
    //!Inserçao dos dados de usuário no Banco de dados
    bancoDeDados.insereDado(bancoDeDados.queryInsertUsuario(usr));

    //!Impressão de Jogo
    jog.imprimeJogo();

    //!impressão de Ingresso
    ing.imprimeIngresso();

    //!impressão de Cartão de Crédito
    cart.imprimeIngresso();

    //LEMBRETES DE CÓDIGO


    bancoDeDados.fechaBD(); //! Comando para fechar a conexão do programa com o banco de dados antes de fechar o programa
    return 0;
}
