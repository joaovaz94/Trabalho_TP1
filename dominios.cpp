//!Trabalho desenvolvido por:
//!João Paulo Vaz Mendes - Matrícula: 170002934
//!Lucas de Moura Quadros - Matrícula: 140150668

#include "dominios.h"
#include <sstream>
#include <stdlib.h>
#include <iostream>

using namespace std;

/**
*Definição de Funções da classe Data
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
//!função para definir data a partir de string
void Data::defineData(string dt) {
    int d,m,a;
    //!passar a string por validação
        validaData(dt);
    //!definição do dia
    d = (dt[0]-'0') * 10;
    d = d + (dt[1]-'0');
    this->dia = d;
    //!definição do mes
    m = (dt[3]-'0') * 10;
    m = m + (dt[4]-'0');
    this->mes = m;
    //!definição do ano
    a = (dt[6]-'0') *1000;
    a = a + ((dt[7]-'0')*100);
    a = a + ((dt[8]-'0')*10);
    a = a + (dt[9]-'0');
    this->ano = a;
    //!uma vez coletados os valores inteiros se define data com a função de definição a partir de inteiros
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

//!Função para tratar números de dia e mês
string  Data::trataNum(int num) {
    ostringstream aux;
    if(num < 10)
        aux << "0" << num;
    else
        aux << num;
    return aux.str();
}
//!Função para validar data a partir dos atributos int
void Data::validaData (int& d,int& m,int& a) throw (std::invalid_argument){
    //!lança exceções no caso de números que superem o escopo de data
    if(d < 1 || d > 31)
       throw invalid_argument("Argumento Inválido: o dia deve ser um número de 1 a 31");
    if(m < 1 || m > 12)
        throw invalid_argument("Argumento Inválido: o mes deve ser um número de 1 a 12");
    if(a < 1900 || a > 3000)
        throw invalid_argument("Argumento Inválido: o ano deve ser um número de 1900 a 3000");
}
//!Função para validar data a partir do atributo string
void Data::validaData (string& dt) throw (std::invalid_argument) {
    char barra = '/';
    //!lança exceção se a data não tiver 10 dígitos
    if ( dt.length() != 10)
        throw invalid_argument("Argumento Inválido: a data deve seguir o padrão dd/mm/aaaa");
    //!lança exceção se os números e as barras não estiverem corretos
    if(isdigit(dt[0]) == false || isdigit(dt[1]) == false )
        throw invalid_argument("Argumento Inválido: a data deve seguir o padrão dd/mm/aaaa e o dia deve ser representado por números");
    if(isdigit(dt[3]) == false || isdigit(dt[4]) == false )
        throw invalid_argument("Argumento Inválido: a data deve seguir o padrão dd/mm/aaaa e o mês deve ser representado por números");
    if(isdigit(dt[6]) == false || isdigit(dt[7]) == false || isdigit(dt[8]) == false || isdigit(dt[9]) == false)
        throw invalid_argument("Argumento Inválido: a data deve seguir o padrão dd/mm/aaaa e o ano deve ser representado por números");
    if( dt[2] != barra || dt[5] != barra )
        throw invalid_argument("Argumento Inválido: a data deve seguir o padrão dd/mm/aaaa e deve ter as barras de separação");
}

/**
*Definição de funções para a classe Cpf
*/
//!Função para definir o número do cpf
void Cpf::defineCpf(string cod) {
    validaCpf(cod);
    this->codigo = cod;
}
//!Função para validar o Cpf ou não
void Cpf::validaCpf (string& cod) throw (invalid_argument){
    int i,soma=0,n,v,g=0;
    //!lança exceção se o cpf não tiver 11 dígitos
    if ( cod.length() != 11)
        throw invalid_argument("Argumento Inválido: o CPF deve ter 11 números");
    //!lança exceção se algum dígito não for um número
    for (i=0;i<11;i++) {
        if(isdigit(cod[i]) == false)
            throw invalid_argument("Argumento Inválido: o CPF deve ter exclusivamente números");
    }

    //!definir exceção de cpf inválido a partir de algorítimo

    /**verificação se todos os dígitos são iguais*/
    for (i=0;i<11;i++){
        n = (cod[i]-'0');
        v = (cod[i+1]-'0');
        if (n == v)
            g++;
    }
        if (g == 10)
        throw invalid_argument("Argumento Inválido: CPF com todos números iguais");
    /**
    *validação do primeiro dígito do CPF
    */
    for (i=0;i < 9;i++) {
        n = (cod[i]-'0');//!transforma o char em int
        soma = (n * (10-i)) + soma;
    }
    v = soma*10%11;
    if (v == 10)
        v = 0;
    n = (cod[9]-'0');//!primeiro dígito da verificação
    if (v != n)
        throw invalid_argument("Argumento Inválido: CPF inválido");
    /**
    *validação do primeiro dígito do CPF
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
    n = (cod[10]-'0');//!segundo dígito da verificação
    if (v != n)
        throw invalid_argument("Argumento Inválido: CPF inválido");
}

/**
*Definição de funções para a classe Horario
*/
//!Construtor da classe
Horario::Horario (int h,int m){
    defineHorario(h,m);
}
//!Função para definir os valores do objeto
void Horario::defineHorario (int h,int m) {
    validaHorario(h,m);
    this->hora = h;
    this->minuto = m;
    this->horario = this->viraString();
}
//!Função para defninir horário a partir de string
void Horario::defineHorario(string hrr){
    int h,m;
    //!passar a string por validação
    validaHorario(hrr);
    //!definição das horas
    h = (hrr[1]-'0');
    h = h + ((hrr[0]-'0') * 10);
    this->hora = h;
    //!definição dos minutos
    m = (hrr[4]-'0');
    m = m + ((hrr[3]-'0') * 10);
    this->minuto = m;
    //!uma vez coletados os valores inteiros se define horario com a função de definição a partir de inteiros
    defineHorario(h,m);
    //!definição da string horario
    this->horario = hrr;
}
//!Função para retornar o Horário como string
string Horario::viraString() {
    ostringstream aux;
    aux << trataNum(hora) << ":" << trataNum(minuto);
    return aux.str();
}
//!Função para tratar números de hora e minuto
string  Horario::trataNum(int& num) {
    ostringstream aux;
    if(num < 10)
        aux << "0" << num;
    else
        aux << num;
    return aux.str();
}
//!função para validar horário dentro dos limites necessários dos atributos int
void Horario::validaHorario (int& h,int& m) throw (std::invalid_argument) {
    //!lança exceções no caso de números que superem o escopo de horário
    if(h < 0 || h > 23)
       throw invalid_argument("Argumento Inválido: as horas devem ser um número de 0 a 23");
    if(m < 0 || m > 60)
        throw invalid_argument("Argumento Inválido: os minutos devem ser um número de 0 a 60");
}
//!função para validar a string horário para q seja válida
void Horario::validaHorario (string& hrr) throw (std::invalid_argument) {
    char pontos = ':';
    //!lança exceção se o horário não tiver 5 dígitos
    if ( hrr.length() != 5)
        throw invalid_argument("Argumento Inválido: a data deve seguir o padrão hh:mm com exatos 5 dígitos");
    //!lança exceção se os números e o dois pontos não estiverem corretos
    if(isdigit(hrr[0]) == false || isdigit(hrr[1]) == false )
        throw invalid_argument("Argumento Inválido: o horário deve seguir o padrão hh:mm e as horas devem ser representadas por números");
    if(isdigit(hrr[3]) == false || isdigit(hrr[4]) == false )
        throw invalid_argument("Argumento Inválido: o horário  deve seguir o padrão hh:mm e o minutos devem ser representados por números");
    if( hrr[2] != pontos )
        throw invalid_argument("Argumento Inválido: o horário  deve seguir o padrão hh:mm e deve ter o dois pontos de separação");
}

/**
*Definição de Funções da classe Código
*/
//!Função para definir Código
void Codigo::defineCodigo (string cod){
    validaCodigo(cod);
    this->codigo = cod;
}
//!Função para validar Código
void Codigo::validaCodigo (string& cod) throw (invalid_argument){
    int i,comp = cod.length();
    //!lança exceção se algum dígito não for um número
    for (i=0;i<comp;i++) {
        if(isdigit(cod[i]) == false)
            throw invalid_argument("Argumento Inválido: o Código deve ter exclusivamente números");
    }
}

/**
*Definição de funções para a classe Preço
*/
//!Função para definir Preço
void Preco::definePreco (double prc) {
    validaPreco(prc);
    this->preco = prc;
}
//!Função para validar Preço
void Preco::validaPreco (double& prc) throw (invalid_argument){
    if (prc < 0.00 || prc > 3000.00)
        throw invalid_argument("Argumento Inválido: os valores de preço excederam os limites que são de 0.00 a 3000.00");
}

/**
*Definição de funções para a classe Disponibilidade
*/
//!Função para definir Disponibilidade
void Disponibilidade::defineDisp (int dsp){
    validaDisp(dsp);
    this->disponibilidade = dsp;
}
//!Função para validar Disponibilidade
void Disponibilidade::validaDisp (int& dsp) throw (invalid_argument){
    if (dsp < 1000 || dsp > 100000)
        throw invalid_argument("Argumento Inválido: a disponibilidade deve ser um valor de 1000 a 100000");
}

/**
*Definição de funções para a classe Senha
*/
//!Função para validar Senha
void Senha::validaSenha(string& sn)  throw (invalid_argument) {
    int c,comp = sn.length();
    //!lança exceção se a senha não de 4 a 6 dígitos
    if ( sn.length() < 4 || sn.length() > 6)
        throw invalid_argument("Argumento Inválido: a Senha deve de 4 a 6 dígitos");
    //!lanças exceção se algum dos dígitos da senha não for nem letra nem número
    for(int i=0;i<comp;i++){
        if (isalnum(sn[i]) == false )
            throw invalid_argument("Argumento Inválido: a Senha deve ser composta apenas de letras e números");
    }
    //!lança exceção se não há nenhum dígito
    c=0;
    for(int i=0;i<comp;i++) {
        if(isdigit(sn[i]) == true)
            c++;
    }
    if(c < 1)
       throw invalid_argument("Argumento Inválido: a Senha deve ter pelo menos um número");
    //!lança exceção se não há nenhuma letra  minúscula
    c=0;
    for(int i=0;i<comp;i++) {
        if(islower(sn[i]) != 0)
            c++;
    }
    if(c < 1)
       throw invalid_argument("Argumento Inválido: a Senha deve ter pelo menos uma letra minúscula");
    //!lança exceção se não há nenhuma letra  maiúscula
    c=0;
    for(int i=0;i<comp;i++) {
        if(isupper(sn[i]) != 0)
            c++;
    }
    if(c < 1)
       throw invalid_argument("Argumento Inválido: a Senha deve ter pelo menos uma letra maiúscula");
}
//!Função para definir Senha
void Senha::defineSenha(string sn) {
    validaSenha(sn);
    this->senha = sn;
}

/**
*Definição de funções para a classe CodigoVerificacao
*/
//!Função para validar CVC
void CodigoVerificacao::validaCodVer (string& cod) throw (invalid_argument){
    validaCodigo(cod);
    //!lança exceção se o CVC não tiver 3 dígitos
    if ( cod.length() != 3)
      throw invalid_argument("Argumento Inválido: o Código de Verificação do Cartão deve ter 3 dígitos");
}
//!Função para definir CVC
void CodigoVerificacao::defineCodVer (string cod){
    validaCodVer(cod);
    this->codigo = cod;
}

/**
*Definição de funções para a classe CodigoJogo
*/
//!Função para validar Codigo do Jogo
void CodigoJogo::validaCodJogo (string& cod) throw (invalid_argument){
    validaCodigo(cod);
    //!lança exceção se o Código do jogo não tiver 3 dígitos
    if ( cod.length() != 3)
      throw invalid_argument("Argumento Inválido: o Código do Jogo deve ter 3 dígitos");
}
//!Função para definir Código de Jogo
void CodigoJogo::defineCodJogo (string cod){
    validaCodJogo(cod);
    this->codigo = cod;
}

/**
*Definição de funções para a classe CodigoIngresso
*/
//!Função para validar Codigo do Ingresso
void CodigoIngresso::validaCodIng (string& cod) throw (invalid_argument){
    validaCodigo(cod);
    //!lança exceção se o Código do ingresso não tiver 5 dígitos
    if ( cod.length() != 5)
      throw invalid_argument("Argumento Inválido: o Código do Ingresso deve ter 5 dígitos");
}
//!Função para definir Código de Ingresso
void CodigoIngresso::defineCodIng(string cod){
    validaCodIng(cod);
    this->codigo = cod;
}

/**
*Definição de funções para a classe Estado
*/
//!Definição de strings constantes de Estados
const string Estado::estados[] {
    "AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA"\
    , "MT", "MS", "MG", "PA", "PB", "PR", "PE", "PI", "RJ", "RN"\
    , "RS", "RO", "RR", "SC", "SP", "SE", "TO"
};
//!Função para definir o estado
void Estado::defineEstado(string est) {
    validaEstado(est);
    this->estado = est;
}
//!Função para validar o estado
void Estado::validaEstado(string& est) throw (invalid_argument) {
    //!lança exceção se o estado não for composto por 2 dígitos
    if(est.length() != 2)
        throw invalid_argument("Argumento Inválido: O Estado deve ser representado apenas por 2 letras");
    //!lança exceção se o estado não for composto apenas de letras
    for(int i=0;i<2;i++){
        if(isalpha(est[i]) == false)
            throw invalid_argument("Argumento Inválido: O Estado deve ser representado apenas por letras");
    }
    //!lança exceção se o estado não for composto apenas de letras maiusculas
    for(int i=0;i<2;i++){
        if(isupper(est[i]) == false)
            throw invalid_argument("Argumento Inválido: O Estado deve ser representado apenas por letras maiúsculas");
    }
    //!lança exceção se o estado não for um dos valores de string definidos
    int c=0;
    for(int i=0;i<27;i++) {
        if(est == estados[i])
           c++;
    }
    if(c == 0)
       throw invalid_argument("Argumento Inválido: O Estado informado não é válido");
}

/**
*Definição de funções para a classe NumCartao
*/
//!Função para definir número de cartão de crédito
void NumCartao::defineNumCartao (string num){
    validaNumCartao(num);
    this->numero = num;
}

//!Função para validar número de cartão de crédito
void NumCartao::validaNumCartao (string& num) throw (invalid_argument){
    //!lança exceção se não tiver o número correto de 16 dígitos
    if (num.length() != 16)
        throw invalid_argument("Argumento Inválido: Número de cartão de crédito deve ter 16 dígitos");
    //!lança exceção se nem todos os elementos da string forem números
    for(int i=0;i<16;i++) {
        if(isdigit(num[i]) == false)
            throw invalid_argument("Argumento Inválido: Número de cartão de crédito deve ser composto apenas de números");
    }

    //!definir exceção de número do cartão de crédito inválido a partir de algorítimo de luhn
    int inter[16];//!array de inteiros para pegar os números do cartão
    int soma=0;//!soma geral dos fatores
    int somaPar=0,somaImpar = 0; //!soma dos dígitos pares e ímpares
    //!passando os números do cartão para a array de inteiros
    for(int i=0;i<16;i++) {
        inter[i] = (num[i] - '0');
    }

    for (int i=15;i>=0;i--) { //!lendo números de tras pra frente
        int p,n=inter[i];
        if ((i%2) == 0) { //!pegando apenas os dígitos pares
            p = (n*2);//!são multiplicados por 2
            if (p > 9) //!se o dobre do número tiver mais de um dígito se subtrai ele por 9
                p = p - 9;
            somaPar += p;//!somam se os dígitos pares
        }
        else { //!dígitos ímpares
            p = n;//!são colocados na soma sem dobrá-los
            somaImpar += p;
        }
    }
    soma = somaImpar + somaPar;//!soma dos dígitos ímpares mais a soma dos dígitos pares
    if ( (soma%10) != 0 ) //!se o resto da divisão da soma por 10 não for zero então o cartão é inválido
        throw invalid_argument("Argumento Inválido: Número de cartão de crédito é inválido");
}

/**
*Definição de funções para a classe Validade
*/
//!Função para validar a data de validade
void Validade::validaValidade (string& val) throw (invalid_argument){
    //!lança exceção se o tamanho da validade não for 5
    if (val.length() != 5)
        throw invalid_argument("Argumento Inválido: A validade deve ter 5 dígitos");
    //!lança exceção para os dígitos que devem ser números
    if (isdigit(val[0]) == false || isdigit(val[1]) == false || isdigit(val[3]) == false || isdigit(val[4]) == false)
        throw invalid_argument("Argumento Inválido: a validade deve seguir o padrão mm/aa e mes e ano devem ser representadas por números");
    //!lança exceção se não tiver a barra entre mes e ano
    if (val[2] != '/')
        throw invalid_argument("Argumento Inválido: a validade deve seguir o padrão mm/aa e deve conter uma barra separando mês e ano");
    //!exceção para tratar valores de mês
    int m;
    m = ( (val[0]-'0') *10 );
    m = m + ( (val[1]-'0') );
    if (m < 1 || m > 12)
        throw invalid_argument("Argumento Inválido: o mês informado na validade no padrão mm/aa deve ser entre 01 e 12");
    //!exceção para tratar valores de ano
    int a;
    a = ( (val[3]-'0') *10 );
    a = a + ( (val[4]-'0') );
    if (a < 0 || a > 99)
        throw invalid_argument("Argumento Inválido: o ano informado na validade no padrão mm/aa deve ser entre 00 e 99");
}
//!Função para definir a data de validade
void Validade::defineValidade (string val){
    validaValidade(val);
    this->validade = val;
}

/**
*Definição de funções para a classe NomeJogo
*/
void NomeJogo::validaNome(string n) throw (std::invalid_argument){

    if(n.length() > 40)
        throw(invalid_argument)("\n\n Erro: Nome do Jogo pode ter no máximo 40 caracteres. \n\n");
    bool flag_letra=false;
    int comp = n.length();
    for(int i=0;i<comp;i++){

        if( ( isalpha( n[i] ) )!=0 ) {
            flag_letra=true;
        }

        else if( ( ( isalnum( n[i] ) )==0 ) && ( n[i]!=' ' ) ){
            throw(invalid_argument)("\n\n Caracter inválido: deve ser alfanumérico oe espaço. \n\n");
        }

        else if( ( n[i]==' ' ) && ( n[i+1]==' ' ) ){
            throw(invalid_argument)("\n\n Erro: espaço não pode ser seguido de outro. \n\n");
            }

    }

    if ( !(flag_letra) ){
        throw(invalid_argument)("\n\n Erro: não há letra no nome do Jogo. \n\n");
    }
}

/**
*Definição de funções para a classe Cidade
*/
void Cidade::validaNome(string n) throw (std::invalid_argument){

    bool flag_letra=false;
    if(n.length() > 15)
        throw(invalid_argument)("\n\n Erro: Cidade pode ter no máximo 15 caracteres. \n\n");
    int comp = n.length();
    for(int i=0;i<comp;i++){

        if( ( isalpha( n[i] ) )!=0 ) {
            flag_letra=true;
        }

        else if( ( ( isalnum( n[i] ) )==0 ) && ( n[i]!=' ' ) && ( n[i]!='.' )){
            throw(invalid_argument)("\n\n Caracter inválido: deve ser alfanumérico oe espaço. \n\n");
        }

        else if( ( n[i]==' ' ) && ( n[i+1]==' ' ) ){
            throw(invalid_argument)("\n\n Erro: espaço não pode ser seguido de outro. \n\n");
            }
        else if( (n[i] == '.') && (isalpha(n[i-1]) ==0 ) ) {
            throw(invalid_argument)("\n\n Erro: todo ponto usado no nome da Cidade deve ser precedido de letra \n\n");
        }
    }

    if ( !(flag_letra) ){
        throw(invalid_argument)("\n\n Erro: não há letra no nome da Cidade. \n\n");
    }
}

/**
*Definição de funções para a classe Tipo
*
*/
void Tipo::validaDigito(int d) throw (std::invalid_argument) {
    if( (d<1)||(d>4) ){
        throw(invalid_argument)("\n\n Dígito inválido: deve ser um número de 1 a 4. \n\n");
    }
}

void Tipo::defineTipo (int d){
    validaDigito(d);
    this->digito=d;
    this->tp=Id(d);
}
//!Função para imprimir o tipo
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
        throw(invalid_argument)("\n\n Erro: Nome do Estádio pode ter no máximo 40 caracteres. \n\n");
    bool flag_letra=false;
    int comp = n.length();
    for(int i=0;i<comp;i++){

        if( ( isalpha( n[i] ) )!=0 ) {
            flag_letra=true;
        }

        else if( ( ( isalnum( n[i] ) )==0 ) && ( n[i]!=' ' ) ){
            throw(invalid_argument)("\n\n Caracter inválido: deve ser alfanumérico oe espaço. \n\n");
        }

        else if( ( n[i]==' ' ) && ( n[i+1]==' ' ) ){
            throw(invalid_argument)("\n\n Erro: espaço não pode ser seguido de outro. \n\n");
            }

    }

    if ( !(flag_letra) ){
        throw(invalid_argument)("\n\n Erro: não há letra no nome do Estádio. \n\n");
    }
}

void Estadio::validaCapacidade (int capacidade) throw(std::invalid_argument){
    if( (capacidade<1000) || (capacidade>100000) ){
        throw(invalid_argument)("\n\n Capacidade inválida: deve ser um número entre 1000 e 100000 pessoas \n\n");
    }

}

