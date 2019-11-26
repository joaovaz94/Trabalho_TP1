//!Trabalho desenvolvido por:
//!Jo�o Paulo Vaz Mendes - Matr�cula: 170002934
//!Lucas de Moura Quadros - Matr�cula: 140150668

//#include <iostream>
//#include "entidades.h"
//#include "dominios.h"
#include "testes.h" //!inclus�o dos testes de unidade no programa
//#include <string>
#include <locale.h>
//#include "SGBD.h"
#include "Interface.h"
//#include "Apresentacao.h"


using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL,"portuguese");//!permitir a impress�o de caracteres em portugu�s

    //!Defini��o e realiza��o dos testes de Unidade no programa
    TestesUnidade testes;
    testes.executaTestesUnidade();

    //!Gest�o de Banco de Dados
    //SGBD bancoDeDados;
    //bancoDeDados.criarTabelas();

    //! Defini��o e execu��o da camada de Apresentação do programa
    //Apresentacao tui;
    //tui.tela_inicial();

    //! Definição e execução da Interface do programa
    Interface interface;
    interface.iniciarPrograma();
    interface.fecharPrograma();

    /*
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
    */

    /*
    //!Declara��o de objetos das Entidades
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
    */

    /*
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

    */

    /*
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
    */

    //cout << endl << endl;

    /*
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
    */

    //LEMBRETES DE C�DIGO


    //bancoDeDados.fechaBD(); //! Comando para fechar a conex�o do programa com o banco de dados antes de fechar o programa
    return 0;
}
