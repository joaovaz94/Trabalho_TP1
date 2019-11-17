//!Trabalho desenvolvido por:
//!Jo�o Paulo Vaz Mendes - Matr�cula: 170002934
//!Lucas de Moura Quadros - Matr�cula: 140150668

#include <iostream>
#include "entidades.h"
#include "dominios.h"
#include "testes.h" //!inclus�o dos testes de unidade no programa
#include <string>
#include <locale.h>
#include "SGBD.h"

using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL,"portuguese");//!permitir a impress�o de caracteres em portugu�s


    //!Declara��o dos Testes de Unidade dos Dom�nios
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

    //!Declara��o de objetos dos Dompinios
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

    //!Declara��o de objetos das Entidades
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

    //!Gest�o de Banco de Dados
    SGBD bancoDeDados;
    bancoDeDados.criarTabelas();

    //!defini��es dos dom�nios
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

    //!defini��es de uma partida
    part.defineCodigo(cd1);
    part.defineData(d1);
    part.defineDisp(dp1);
    part.defineHorario(h1);
    part.definePreco(p1);

    //!defini��es de um usu�rio
    usr.defineCpf(c1);
    usr.defineSenha(s1);

    //!Defini��o de Jogo
    jog.defineCodJogo(cj1);
    jog.defineNomeJogo(nj1);
    jog.defineCidade(cdd1);
    jog.defineEstado(e1);
    jog.defineTipo(t1);

    //!Defini��o de Ingresso
    ing.defineCodIng(ci1);

    //!Defini��o de Cart�o de Cr�dito
    cart.defineNumCartao(nc1);
    cart.defineCodVer(cv1);
    cart.defineValidade(v1);

    //!Impress�o de dom�nios
    cout << "CPF: " << c1.pegaCpf() << endl;
    cout << "Data: " << d1.viraString() << endl;
    cout << "Hor�rio: " << h1.viraString() << endl;
    cout << "C�digo: " << cd1.pegaCodigo() << endl;
    cout << "Pre�o: " << p1.pegaPreco() << endl;
    cout << "Disponibilidade: " << dp1.pegaDisp() << endl;
    cout << "Senha: " << s1.pegaSenha() << endl;
    cout << "C�digo de Verifica��o do Cart�o: " << cv1.pegaCodigo() << endl;
    cout << "C�digo do Jogo: " << cj1.pegaCodigo() << endl;
    cout << "C�digo do Ingresso: " << ci1.pegaCodigo() << endl;
    cout << "Estado: " << e1.pegaEstado() << endl;
    cout << "N�mero do Cart�o de Cr�dito: " << nc1.pegaNumCartao() << endl;
    cout << "Validade: " << v1.pegaValidade() << endl;
    cout << "Nome do Jogo: " << nj1.pegaNome() << endl;
    cout << "Cidade: " << cdd1.pegaNome() << endl;
    cout << "Tipo: " << t1.stringTipo() << endl;

    cout << endl << endl;

    //!Impress�o de Partida
    part.imprimePartida();

    //!Impress�o de Usu�rio
    usr.imprimeUsuario();
    //!Inser�ao dos dados de usu�rio no Banco de dados
    bancoDeDados.insereDado(bancoDeDados.queryInsertUsuario(usr));

    //!Impress�o de Jogo
    jog.imprimeJogo();

    //!impress�o de Ingresso
    ing.imprimeIngresso();

    //!impress�o de Cart�o de Cr�dito
    cart.imprimeIngresso();

    //LEMBRETES DE C�DIGO


    bancoDeDados.fechaBD(); //! Comando para fechar a conex�o do programa com o banco de dados antes de fechar o programa
    return 0;
}
