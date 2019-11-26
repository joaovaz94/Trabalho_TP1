//!Trabalho desenvolvido por:
//!Jo�o Paulo Vaz Mendes - Matr�cula: 170002934
//!Lucas de Moura Quadros - Matr�cula: 140150668

#include "dominios.h"
#include <sstream>
#include <stdlib.h>
#include <iostream>

using namespace std;

/**
*Defini��o de Fun��es da classe Data
*/

//!construtor de data
Data::Data(int d,int m,int a) {
    defineData(d,m,a);
}

void Data::defineData(int d,int m,int a) {
    validaData(d,m,a);
    this->dia = d;
    this->mes = m;
    this->ano = a;
    this->data = this->viraString();
}
//!fun��o para definir data a partir de string
void Data::defineData(string dt) {
    int d,m,a;
    //!passar a string por valida��o
        validaData(dt);
    //!defini��o do dia
    d = (dt[0]-'0') * 10;
    d = d + (dt[1]-'0');
    this->dia = d;
    //!defini��o do mes
    m = (dt[3]-'0') * 10;
    m = m + (dt[4]-'0');
    this->mes = m;
    //!defini��o do ano
    a = (dt[6]-'0') *1000;
    a = a + ((dt[7]-'0')*100);
    a = a + ((dt[8]-'0')*10);
    a = a + (dt[9]-'0');
    this->ano = a;
    //!uma vez coletados os valores inteiros se define data com a fun��o de defini��o a partir de inteiros
    defineData(d,m,a);
}

string Data::viraString() {
    ostringstream aux;
    aux << trataNum(dia) << "/" << trataNum(mes) << "/" << ano;
    return aux.str();
}

string Data::viraStringDB() {
    ostringstream aux;
    aux << ano << "-" << trataNum(mes) << "-" << trataNum(dia);
    return aux.str();
}

//!Fun��o para tratar n�meros de dia e m�s
string  Data::trataNum(int num) {
    ostringstream aux;
    if(num < 10)
        aux << "0" << num;
    else
        aux << num;
    return aux.str();
}
//!Fun��o para validar data a partir dos atributos int
void Data::validaData (int& d,int& m,int& a) throw (std::invalid_argument){
    //!lan�a exce��es no caso de n�meros que superem o escopo de data
    if(d < 1 || d > 31)
       throw invalid_argument("Argumento Inv�lido: o dia deve ser um n�mero de 1 a 31");
    if(m < 1 || m > 12)
        throw invalid_argument("Argumento Inv�lido: o mes deve ser um n�mero de 1 a 12");
    if(a < 1900 || a > 3000)
        throw invalid_argument("Argumento Inv�lido: o ano deve ser um n�mero de 1900 a 3000");
}
//!Fun��o para validar data a partir do atributo string
void Data::validaData (string& dt) throw (std::invalid_argument) {
    char barra = '/';
    //!lan�a exce��o se a data n�o tiver 10 d�gitos
    if ( dt.length() != 10)
        throw invalid_argument("Argumento Inv�lido: a data deve seguir o padr�o dd/mm/aaaa");
    //!lan�a exce��o se os n�meros e as barras n�o estiverem corretos
    if(isdigit(dt[0]) == false || isdigit(dt[1]) == false )
        throw invalid_argument("Argumento Inv�lido: a data deve seguir o padr�o dd/mm/aaaa e o dia deve ser representado por n�meros");
    if(isdigit(dt[3]) == false || isdigit(dt[4]) == false )
        throw invalid_argument("Argumento Inv�lido: a data deve seguir o padr�o dd/mm/aaaa e o m�s deve ser representado por n�meros");
    if(isdigit(dt[6]) == false || isdigit(dt[7]) == false || isdigit(dt[8]) == false || isdigit(dt[9]) == false)
        throw invalid_argument("Argumento Inv�lido: a data deve seguir o padr�o dd/mm/aaaa e o ano deve ser representado por n�meros");
    if( dt[2] != barra || dt[5] != barra )
        throw invalid_argument("Argumento Inv�lido: a data deve seguir o padr�o dd/mm/aaaa e deve ter as barras de separa��o");
}

/**
*Defini��o de fun��es para a classe Cpf
*/
//!Fun��o para definir o n�mero do cpf
void Cpf::defineCpf(string cod) {
    validaCpf(cod);
    this->codigo = cod;
}
//!Fun��o para validar o Cpf ou n�o
void Cpf::validaCpf (string& cod) throw (invalid_argument){
    int i,soma=0,n,v,g=0;
    //!lan�a exce��o se o cpf n�o tiver 11 d�gitos
    if ( cod.length() != 11)
        throw invalid_argument("Argumento Inv�lido: o CPF deve ter 11 n�meros");
    //!lan�a exce��o se algum d�gito n�o for um n�mero
    for (i=0;i<11;i++) {
        if(isdigit(cod[i]) == false)
            throw invalid_argument("Argumento Inv�lido: o CPF deve ter exclusivamente n�meros");
    }

    //!definir exce��o de cpf inv�lido a partir de algor�timo

    /**verifica��o se todos os d�gitos s�o iguais*/
    for (i=0;i<11;i++){
        n = (cod[i]-'0');
        v = (cod[i+1]-'0');
        if (n == v)
            g++;
    }
        if (g == 10)
        throw invalid_argument("Argumento Inv�lido: CPF com todos n�meros iguais");
    /**
    *valida��o do primeiro d�gito do CPF
    */
    for (i=0;i < 9;i++) {
        n = (cod[i]-'0');//!transforma o char em int
        soma = (n * (10-i)) + soma;
    }
    v = soma*10%11;
    if (v == 10)
        v = 0;
    n = (cod[9]-'0');//!primeiro d�gito da verifica��o
    if (v != n)
        throw invalid_argument("Argumento Inv�lido: CPF inv�lido");
    /**
    *valida��o do primeiro d�gito do CPF
    */
    soma = 0;
    for (i=0;i < 10;i++) {
        n = (cod[i]-'0');//!transforma o char em int
        //cout << n  << " ";
        soma = (n * (11-i)) + soma;
    }
    v = soma*10%11;
    if (v == 10)
        v = 0;
    n = (cod[10]-'0');//!segundo d�gito da verifica��o
    if (v != n)
        throw invalid_argument("Argumento Inv�lido: CPF inv�lido");
}

/**
*Defini��o de fun��es para a classe Horario
*/
//!Construtor da classe
Horario::Horario (int h,int m){
    defineHorario(h,m);
}
//!Fun��o para definir os valores do objeto
void Horario::defineHorario (int h,int m) {
    validaHorario(h,m);
    this->hora = h;
    this->minuto = m;
    this->horario = this->viraString();
}
//!Fun��o para defninir hor�rio a partir de string
void Horario::defineHorario(string hrr){
    int h,m;
    //!passar a string por valida��o
    validaHorario(hrr);
    //!defini��o das horas
    h = (hrr[1]-'0');
    h = h + ((hrr[0]-'0') * 10);
    this->hora = h;
    //!defini��o dos minutos
    m = (hrr[4]-'0');
    m = m + ((hrr[3]-'0') * 10);
    this->minuto = m;
    //!uma vez coletados os valores inteiros se define horario com a fun��o de defini��o a partir de inteiros
    defineHorario(h,m);
    //!defini��o da string horario
    this->horario = hrr;
}
//!Fun��o para retornar o Hor�rio como string
string Horario::viraString() {
    ostringstream aux;
    aux << trataNum(hora) << ":" << trataNum(minuto);
    return aux.str();
}
//!Fun��o para tratar n�meros de hora e minuto
string  Horario::trataNum(int& num) {
    ostringstream aux;
    if(num < 10)
        aux << "0" << num;
    else
        aux << num;
    return aux.str();
}
//!fun��o para validar hor�rio dentro dos limites necess�rios dos atributos int
void Horario::validaHorario (int& h,int& m) throw (std::invalid_argument) {
    //!lan�a exce��es no caso de n�meros que superem o escopo de hor�rio
    if(h < 0 || h > 23)
       throw invalid_argument("Argumento Inv�lido: as horas devem ser um n�mero de 0 a 23");
    if(m < 0 || m > 60)
        throw invalid_argument("Argumento Inv�lido: os minutos devem ser um n�mero de 0 a 60");
}
//!fun��o para validar a string hor�rio para q seja v�lida
void Horario::validaHorario (string& hrr) throw (std::invalid_argument) {
    char pontos = ':';
    //!lan�a exce��o se o hor�rio n�o tiver 5 d�gitos
    if ( hrr.length() != 5)
        throw invalid_argument("Argumento Inv�lido: a data deve seguir o padr�o hh:mm com exatos 5 d�gitos");
    //!lan�a exce��o se os n�meros e o dois pontos n�o estiverem corretos
    if(isdigit(hrr[0]) == false || isdigit(hrr[1]) == false )
        throw invalid_argument("Argumento Inv�lido: o hor�rio deve seguir o padr�o hh:mm e as horas devem ser representadas por n�meros");
    if(isdigit(hrr[3]) == false || isdigit(hrr[4]) == false )
        throw invalid_argument("Argumento Inv�lido: o hor�rio  deve seguir o padr�o hh:mm e o minutos devem ser representados por n�meros");
    if( hrr[2] != pontos )
        throw invalid_argument("Argumento Inv�lido: o hor�rio  deve seguir o padr�o hh:mm e deve ter o dois pontos de separa��o");
}

/**
*Defini��o de Fun��es da classe C�digo
*/
//!Fun��o para definir C�digo
void Codigo::defineCodigo (string cod){
    validaCodigo(cod);
    this->codigo = cod;
}
//!Fun��o para validar C�digo
void Codigo::validaCodigo (string& cod) throw (invalid_argument){
    int i,comp = cod.length();
    //!lan�a exce��o se algum d�gito n�o for um n�mero
    for (i=0;i<comp;i++) {
        if(isdigit(cod[i]) == false)
            throw invalid_argument("Argumento Inv�lido: o C�digo deve ter exclusivamente n�meros");
    }
}

/**
*Defini��o de fun��es para a classe Pre�o
*/
//!Fun��o para definir Pre�o
void Preco::definePreco (double prc) {
    validaPreco(prc);
    this->preco = prc;
}
//!Fun��o para validar Pre�o
void Preco::validaPreco (double& prc) throw (invalid_argument){
    if (prc < 0.00 || prc > 3000.00)
        throw invalid_argument("Argumento Inv�lido: os valores de pre�o excederam os limites que s�o de 0.00 a 3000.00");
}

/**
*Defini��o de fun��es para a classe Disponibilidade
*/
//!Fun��o para definir Disponibilidade
void Disponibilidade::defineDisp (int dsp){
    validaDisp(dsp);
    this->disponibilidade = dsp;
}
//!Fun��o para validar Disponibilidade
void Disponibilidade::validaDisp (int& dsp) throw (invalid_argument){
    if (dsp < 1000 || dsp > 100000)
        throw invalid_argument("Argumento Inv�lido: a disponibilidade deve ser um valor de 1000 a 100000");
}

/**
*Defini��o de fun��es para a classe Senha
*/
//!Fun��o para validar Senha
void Senha::validaSenha(string& sn)  throw (invalid_argument) {
    int c,comp = sn.length();
    //!lan�a exce��o se a senha n�o de 4 a 6 d�gitos
    if ( sn.length() < 4 || sn.length() > 6)
        throw invalid_argument("Argumento Inv�lido: a Senha deve de 4 a 6 d�gitos");
    //!lan�as exce��o se algum dos d�gitos da senha n�o for nem letra nem n�mero
    for(int i=0;i<comp;i++){
        if (isalnum(sn[i]) == false )
            throw invalid_argument("Argumento Inv�lido: a Senha deve ser composta apenas de letras e n�meros");
    }
    //!lan�a exce��o se n�o h� nenhum d�gito
    c=0;
    for(int i=0;i<comp;i++) {
        if(isdigit(sn[i]) == true)
            c++;
    }
    if(c < 1)
       throw invalid_argument("Argumento Inv�lido: a Senha deve ter pelo menos um n�mero");
    //!lan�a exce��o se n�o h� nenhuma letra  min�scula
    c=0;
    for(int i=0;i<comp;i++) {
        if(islower(sn[i]) != 0)
            c++;
    }
    if(c < 1)
       throw invalid_argument("Argumento Inv�lido: a Senha deve ter pelo menos uma letra min�scula");
    //!lan�a exce��o se n�o h� nenhuma letra  mai�scula
    c=0;
    for(int i=0;i<comp;i++) {
        if(isupper(sn[i]) != 0)
            c++;
    }
    if(c < 1)
       throw invalid_argument("Argumento Inv�lido: a Senha deve ter pelo menos uma letra mai�scula");
}
//!Fun��o para definir Senha
void Senha::defineSenha(string sn) {
    validaSenha(sn);
    this->senha = sn;
}

/**
*Defini��o de fun��es para a classe CodigoVerificacao
*/
//!Fun��o para validar CVC
void CodigoVerificacao::validaCodVer (string& cod) throw (invalid_argument){
    validaCodigo(cod);
    //!lan�a exce��o se o CVC n�o tiver 3 d�gitos
    if ( cod.length() != 3)
      throw invalid_argument("Argumento Inv�lido: o C�digo de Verifica��o do Cart�o deve ter 3 d�gitos");
}
//!Fun��o para definir CVC
void CodigoVerificacao::defineCodVer (string cod){
    validaCodVer(cod);
    this->codigo = cod;
}

/**
*Defini��o de fun��es para a classe CodigoJogo
*/
//!Fun��o para validar Codigo do Jogo
void CodigoJogo::validaCodJogo (string& cod) throw (invalid_argument){
    validaCodigo(cod);
    //!lan�a exce��o se o C�digo do jogo n�o tiver 3 d�gitos
    if ( cod.length() != 3)
      throw invalid_argument("Argumento Inv�lido: o C�digo do Jogo deve ter 3 d�gitos");
}
//!Fun��o para definir C�digo de Jogo
void CodigoJogo::defineCodJogo (string cod){
    validaCodJogo(cod);
    this->codigo = cod;
}

/**
*Defini��o de fun��es para a classe CodigoIngresso
*/
//!Fun��o para validar Codigo do Ingresso
void CodigoIngresso::validaCodIng (string& cod) throw (invalid_argument){
    validaCodigo(cod);
    //!lan�a exce��o se o C�digo do ingresso n�o tiver 5 d�gitos
    if ( cod.length() != 5)
      throw invalid_argument("Argumento Inv�lido: o C�digo do Ingresso deve ter 5 d�gitos");
}
//!Fun��o para definir C�digo de Ingresso
void CodigoIngresso::defineCodIng(string cod){
    validaCodIng(cod);
    this->codigo = cod;
}

/**
*Defini��o de fun��es para a classe Estado
*/
//!Defini��o de strings constantes de Estados
const string Estado::estados[] {
    "AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA"\
    , "MT", "MS", "MG", "PA", "PB", "PR", "PE", "PI", "RJ", "RN"\
    , "RS", "RO", "RR", "SC", "SP", "SE", "TO"
};
//!Fun��o para definir o estado
void Estado::defineEstado(string est) {
    validaEstado(est);
    this->estado = est;
}
//!Fun��o para validar o estado
void Estado::validaEstado(string& est) throw (invalid_argument) {
    //!lan�a exce��o se o estado n�o for composto por 2 d�gitos
    if(est.length() != 2)
        throw invalid_argument("Argumento Inv�lido: O Estado deve ser representado apenas por 2 letras");
    //!lan�a exce��o se o estado n�o for composto apenas de letras
    for(int i=0;i<2;i++){
        if(isalpha(est[i]) == false)
            throw invalid_argument("Argumento Inv�lido: O Estado deve ser representado apenas por letras");
    }
    //!lan�a exce��o se o estado n�o for composto apenas de letras maiusculas
    for(int i=0;i<2;i++){
        if(isupper(est[i]) == false)
            throw invalid_argument("Argumento Inv�lido: O Estado deve ser representado apenas por letras mai�sculas");
    }
    //!lan�a exce��o se o estado n�o for um dos valores de string definidos
    int c=0;
    for(int i=0;i<27;i++) {
        if(est == estados[i])
           c++;
    }
    if(c == 0)
       throw invalid_argument("Argumento Inv�lido: O Estado informado n�o � v�lido");
}

/**
*Defini��o de fun��es para a classe NumCartao
*/
//!Fun��o para definir n�mero de cart�o de cr�dito
void NumCartao::defineNumCartao (string num){
    validaNumCartao(num);
    this->numero = num;
}

//!Fun��o para validar n�mero de cart�o de cr�dito
void NumCartao::validaNumCartao (string& num) throw (invalid_argument){
    //!lan�a exce��o se n�o tiver o n�mero correto de 16 d�gitos
    if (num.length() != 16)
        throw invalid_argument("Argumento Inv�lido: N�mero de cart�o de cr�dito deve ter 16 d�gitos");
    //!lan�a exce��o se nem todos os elementos da string forem n�meros
    for(int i=0;i<16;i++) {
        if(isdigit(num[i]) == false)
            throw invalid_argument("Argumento Inv�lido: N�mero de cart�o de cr�dito deve ser composto apenas de n�meros");
    }

    //!definir exce��o de n�mero do cart�o de cr�dito inv�lido a partir de algor�timo de luhn
    int inter[16];//!array de inteiros para pegar os n�meros do cart�o
    int soma=0;//!soma geral dos fatores
    int somaPar=0,somaImpar = 0; //!soma dos d�gitos pares e �mpares
    //!passando os n�meros do cart�o para a array de inteiros
    for(int i=0;i<16;i++) {
        inter[i] = (num[i] - '0');
    }

    for (int i=15;i>=0;i--) { //!lendo n�meros de tras pra frente
        int p,n=inter[i];
        if ((i%2) == 0) { //!pegando apenas os d�gitos pares
            p = (n*2);//!s�o multiplicados por 2
            if (p > 9) //!se o dobre do n�mero tiver mais de um d�gito se subtrai ele por 9
                p = p - 9;
            somaPar += p;//!somam se os d�gitos pares
        }
        else { //!d�gitos �mpares
            p = n;//!s�o colocados na soma sem dobr�-los
            somaImpar += p;
        }
    }
    soma = somaImpar + somaPar;//!soma dos d�gitos �mpares mais a soma dos d�gitos pares
    if ( (soma%10) != 0 ) //!se o resto da divis�o da soma por 10 n�o for zero ent�o o cart�o � inv�lido
        throw invalid_argument("Argumento Inv�lido: N�mero de cart�o de cr�dito � inv�lido");
}

/**
*Defini��o de fun��es para a classe Validade
*/
//!Fun��o para validar a data de validade
void Validade::validaValidade (string& val) throw (invalid_argument){
    //!lan�a exce��o se o tamanho da validade n�o for 5
    if (val.length() != 5)
        throw invalid_argument("Argumento Inv�lido: A validade deve ter 5 d�gitos");
    //!lan�a exce��o para os d�gitos que devem ser n�meros
    if (isdigit(val[0]) == false || isdigit(val[1]) == false || isdigit(val[3]) == false || isdigit(val[4]) == false)
        throw invalid_argument("Argumento Inv�lido: a validade deve seguir o padr�o mm/aa e mes e ano devem ser representadas por n�meros");
    //!lan�a exce��o se n�o tiver a barra entre mes e ano
    if (val[2] != '/')
        throw invalid_argument("Argumento Inv�lido: a validade deve seguir o padr�o mm/aa e deve conter uma barra separando m�s e ano");
    //!exce��o para tratar valores de m�s
    int m;
    m = ( (val[0]-'0') *10 );
    m = m + ( (val[1]-'0') );
    if (m < 1 || m > 12)
        throw invalid_argument("Argumento Inv�lido: o m�s informado na validade no padr�o mm/aa deve ser entre 01 e 12");
    //!exce��o para tratar valores de ano
    int a;
    a = ( (val[3]-'0') *10 );
    a = a + ( (val[4]-'0') );
    if (a < 0 || a > 99)
        throw invalid_argument("Argumento Inv�lido: o ano informado na validade no padr�o mm/aa deve ser entre 00 e 99");
}
//!Fun��o para definir a data de validade
void Validade::defineValidade (string val){
    validaValidade(val);
    this->validade = val;
}

/**
*Defini��o de fun��es para a classe NomeJogo
*/
void NomeJogo::validaNome(string n) throw (std::invalid_argument){

    if(n.length() > 40)
        throw(invalid_argument)("\n\n Erro: Nome do Jogo pode ter no m�ximo 40 caracteres. \n\n");
    bool flag_letra=false;
    int comp = n.length();
    for(int i=0;i<comp;i++){

        if( ( isalpha( n[i] ) )!=0 ) {
            flag_letra=true;
        }

        else if( ( ( isalnum( n[i] ) )==0 ) && ( n[i]!=' ' ) ){
            throw(invalid_argument)("\n\n Caracter inv�lido: deve ser alfanum�rico oe espa�o. \n\n");
        }

        else if( ( n[i]==' ' ) && ( n[i+1]==' ' ) ){
            throw(invalid_argument)("\n\n Erro: espa�o n�o pode ser seguido de outro. \n\n");
            }

    }

    if ( !(flag_letra) ){
        throw(invalid_argument)("\n\n Erro: n�o h� letra no nome do Jogo. \n\n");
    }
}

/**
*Defini��o de fun��es para a classe Cidade
*/
void Cidade::validaNome(string n) throw (std::invalid_argument){

    bool flag_letra=false;
    if(n.length() > 15)
        throw(invalid_argument)("\n\n Erro: Cidade pode ter no m�ximo 15 caracteres. \n\n");
    int comp = n.length();
    for(int i=0;i<comp;i++){

        if( ( isalpha( n[i] ) )!=0 ) {
            flag_letra=true;
        }

        else if( ( ( isalnum( n[i] ) )==0 ) && ( n[i]!=' ' ) && ( n[i]!='.' )){
            throw(invalid_argument)("\n\n Caracter inv�lido: deve ser alfanum�rico oe espa�o. \n\n");
        }

        else if( ( n[i]==' ' ) && ( n[i+1]==' ' ) ){
            throw(invalid_argument)("\n\n Erro: espa�o n�o pode ser seguido de outro. \n\n");
            }
        else if( (n[i] == '.') && (isalpha(n[i-1]) ==0 ) ) {
            throw(invalid_argument)("\n\n Erro: todo ponto usado no nome da Cidade deve ser precedido de letra \n\n");
        }
    }

    if ( !(flag_letra) ){
        throw(invalid_argument)("\n\n Erro: n�o h� letra no nome da Cidade. \n\n");
    }
}

/**
*Defini��o de fun��es para a classe Tipo
*
*/
void Tipo::validaDigito(int d) throw (std::invalid_argument) {
    if( (d<1)||(d>4) ){
        throw(invalid_argument)("\n\n D�gito inv�lido: deve ser um n�mero de 1 a 4. \n\n");
    }
}

void Tipo::defineTipo (int d){
    validaDigito(d);
    this->digito=d;
    this->tp=Id(d);
}
//!Fun��o para imprimir o tipo
string Tipo::stringTipo () {
    string tipo;
    switch(this->pegaTipo()) {
            case 1: tipo="LOCAL";
                    break;
            case 2: tipo="ESTADUAL";
                    break;
            case 3: tipo="NACIONAL";
                    break;
            case 4: tipo="INTERNACIONAL";
                    break;
    }
    return tipo;
}

void Estadio::validaNome(string n) throw (std::invalid_argument){

    if(n.length() > 40)
        throw(invalid_argument)("\n\n Erro: Nome do Est�dio pode ter no m�ximo 40 caracteres. \n\n");
    bool flag_letra=false;
    int comp = n.length();
    for(int i=0;i<comp;i++){

        if( ( isalpha( n[i] ) )!=0 ) {
            flag_letra=true;
        }

        else if( ( ( isalnum( n[i] ) )==0 ) && ( n[i]!=' ' ) ){
            throw(invalid_argument)("\n\n Caracter inv�lido: deve ser alfanum�rico oe espa�o. \n\n");
        }

        else if( ( n[i]==' ' ) && ( n[i+1]==' ' ) ){
            throw(invalid_argument)("\n\n Erro: espa�o n�o pode ser seguido de outro. \n\n");
            }

    }

    if ( !(flag_letra) ){
        throw(invalid_argument)("\n\n Erro: n�o h� letra no nome do Est�dio. \n\n");
    }
}

void Estadio::validaCapacidade (int capacidade) throw(std::invalid_argument){
    if( (capacidade<1000) || (capacidade>100000) ){
        throw(invalid_argument)("\n\n Capacidade inv�lida: deve ser um n�mero entre 1000 e 100000 pessoas \n\n");
    }

}

