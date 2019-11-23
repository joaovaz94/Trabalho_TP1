//!Trabalho desenvolvido por:
//!João Paulo Vaz Mendes - Matrícula: 170002934
//!Lucas de Moura Quadros - Matrícula: 140150668

//#include <iostream>
#include "entidades.h"
#include "dominios.h"
#include "testes.h" //!inclusão dos testes de unidade no programa
//#include <string>
#include <locale.h>
#include "Interface.h"
#include "Apresentacao.h"


using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");//!permitir a impressão de caracteres em português

    //!Definição e realização dos testes de Unidade no programa
    TestesUnidade testes;
    testes.executaTestesUnidade();

    //! Definição e execução da interface do programa
    Apresentacao tui;

    tui.tela_inicial();

    /*
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
    */

    /*
    //!Declaração de objetos das Entidades
    Partida part;
    Usuario usr;
    Jogo jog;
    Ingresso ing;
    CartaoCredito cart;
    */

    /*
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
    */

    /*
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
    */

    /*
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

    */

    /*
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
    */

    //cout << endl << endl;

    /*
    //!Impressão de Partida
    part.imprimePartida();

    //!Impressão de Usuário
    usr.imprimeUsuario();

    //!Impressão de Jogo
    jog.imprimeJogo();

    //!impressão de Ingresso
    ing.imprimeIngresso();

    //!impressão de Cartão de Crédito
    cart.imprimeIngresso();
    */

    return 0;
}
