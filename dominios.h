//!Trabalho desenvolvido por:
//!Jo�o Paulo Vaz Mendes - Matr�cula: 170002934
//!Lucas de Moura Quadros - Matr�cula: 140150668

#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
#include <stdexcept>

class Data {
    public:
        //!construtor da classe Data
        Data (int d=1,int m=1,int a=2000);
        //!fun��o para retornar data como string
        std::string viraString();
        //!fun��o para retornar data como string nos moldes do tipo date de SQL
        std::string viraStringDB();
        //!fun��o para definir os valores de data
        void defineData(int d,int m,int a);
        //!fun��o para definir data a partir de string
        void defineData(std::string dt);
        //!Fun��o para tratar n�meros de dia e m�s
        std::string  trataNum(int num);
        //!Fun��o para validar data a partir dos atributos int
        void validaData (int& d,int& m,int& a) throw (std::invalid_argument);
        //!Fun��o para validar data a partir do atributo string
        void validaData (std::string& dt) throw (std::invalid_argument);
    private:
        int dia, mes, ano;
        std::string data;
};

class Cpf {
 private:
        std::string codigo;
        //!Fun��o para validar o Cpf ou n�o
        void validaCpf (std::string& cod) throw (std::invalid_argument);
 public:
        //!Fun��o para definir o n�mero do cpf
        void defineCpf(std::string cod);
        //!fun��o para retornar o CPF
        std::string pegaCpf() {return codigo;}
};

class Horario {
 private:
        int hora,minuto;
        std::string horario;
 public:
        //!Construtor da classe
        Horario (int h=12,int m=0);
        //!Fun��o para definir os valores do objeto
        void defineHorario (int h,int m);
        //!Fun��o para defninir hor�rio a partir de string
        void defineHorario(std::string hrr);
        //!Fun��o para retornar o Hor�rio como string
        std::string viraString();
        //!Fun��o para tratar n�meros de hora e minuto
        std::string  trataNum(int& num);
        //!fun��o para validar hor�rio dentro dos limites necess�rios
        void validaHorario (int& h,int& m) throw (std::invalid_argument);
        //!fun��o para validar a string hor�rio para q seja v�lida
        void validaHorario (std::string& hrr) throw (std::invalid_argument);
};

class Codigo {
 protected:
        std::string codigo;
        //!Fun��o para validar C�digo
        void validaCodigo (std::string& cod) throw (std::invalid_argument);
 public:
        //!Fun��o para definir C�digo
        void defineCodigo (std::string cod);
        //!Fun��o para retornar C�digo
        std::string pegaCodigo() {return codigo;}
};

class Preco {
 private:
        double preco;
 public:
        //!Fun��o para definir Pre�o
        void definePreco (double prc);
        //!Fun��o para retornar Pre�o
        double pegaPreco() {return preco;}
        //!Fun��o para validar Pre�o
        void validaPreco (double& prc) throw (std::invalid_argument);
};

class Disponibilidade {
 private:
        int disponibilidade;
 public:
        //!Fun��o para definir Disponibilidade
        void defineDisp (int dsp);
        //!Fun��o para validar Disponibilidade
        void validaDisp (int& dsp) throw (std::invalid_argument);
        //!Fun��o para retornar Disponibilidade
        int pegaDisp() {return disponibilidade;}
};

class Senha {
 private:
        std::string senha;
        //!Fun��o para validar Senha
        void validaSenha (std::string& sn) throw (std::invalid_argument);
 public:
        //!Fun��o para definir Senha
        void defineSenha (std::string sn);
        //!Fun��o para retornar Senha
        std::string pegaSenha() {return senha;}
};
//!Classe do C�digo de verifica��o do cart�o CVC
class CodigoVerificacao: public Codigo { //!classe que herda classe C�digo
 private:
        //!Fun��o para validar CVC
        void validaCodVer (std::string& cod) throw (std::invalid_argument);
 public:

        //!Fun��o para definir CVC
        void defineCodVer (std::string cod);

};
//!Classe do c�digo do Jogo
class CodigoJogo: public Codigo {
 private:
        //!Fun��o para validar c�digo do Jogo
        void validaCodJogo (std::string& cod) throw (std::invalid_argument);
 public:
        //!Fun��o para definir o C�digo do Jogo
        void defineCodJogo (std::string cod);
};
//!Classe do c�digo do Ingresso
class CodigoIngresso: public Codigo {
 private:
        //!Fun��o para validar o C�digo do Ingresso
        void validaCodIng (std::string& cod) throw (std::invalid_argument);
 public:
        //!Fun��o para validar o C�digo do Ingresso
        void defineCodIng (std::string cod);
};
//!classe do Estado
class Estado {
 private:
        std::string estado;
        //!Defini��o de strings constantes de Estados
        static const std::string estados[];
        //!Fun��o para validar estado
        void validaEstado (std::string& est) throw (std::invalid_argument);
 public:
        //!Fun��o para definir o estado
        void defineEstado (std::string est);
        //!Fun��o para retornar estado
        std::string pegaEstado () {return estado;}
};
//!Classe do Dom�nio N�mero de Cart�o de Cr�dito
class NumCartao {
 private:
        std::string numero;
        //!Fun��o para validar n�mero de cart�o de cr�dito
        void validaNumCartao (std::string& num) throw (std::invalid_argument);
 public:
        //!Fun��o para definir n�mero de cart�o de cr�dito
        void defineNumCartao (std::string num);
        //!Fun��o para retornar n�mero do cart�o de cr�dito
        std::string pegaNumCartao () {return numero;}
};
//!Classe do Dom�nio Data de Validade
class Validade {
 private:
        std::string validade;
        //!Fun��o para validar a data de validade
        void validaValidade (std::string& val) throw (std::invalid_argument);
 public:
        //!Fun��o para definir a data de validade
        void defineValidade (std::string val);
        //!Fun��o para retornar a data de validade
        std::string pegaValidade() {return validade;}
};
//!Classe Gen�rica Nome
class Nome {
    public:
        //!Fun��o para definir Nome
        void defineNome(std::string n){
            validaNome(n);
            this->nome=n;
        }
        //!Defini��o gen�rica de valida��o do nome
        virtual void validaNome(std::string) throw (std::invalid_argument) = 0;
        //!Fun��o para retornar Nome
        std::string pegaNome() {return nome;}
    protected:
        std::string nome;
};
//!Classe do dom�nio Nome de Jogo que herda da classe Nome
class NomeJogo: public Nome{
    private:
        //!Fun��o de valida��o do nome do Jogo
        void validaNome(std::string) throw (std::invalid_argument);
    public:
        //!Destrutor virtual para excluir objeto da classe sem problema no polimorphismo
        virtual ~NomeJogo() {}
};
//!Classe do dom�nio Cidade que herda da classe Nome
class Cidade: public Nome{
    private:
        //!Fun��o de valida��o do nome da Cidade
        void validaNome(std::string) throw (std::invalid_argument);
    public:
        //!Destrutor virtual para excluir objeto da classe sem problema no polimorphismo
        virtual ~Cidade() {}
};
//!Defini��o de tipos  enum dos tipos da classe Tipo
enum Id{LOCAL=1, ESTADUAL, NACIONAL, INTERNACIONAL};
//!Classe do dom�nio Tipo
class Tipo{
    public:
        //!Fun��o de defini��o do tipo
        void defineTipo(int d);
        //!Fun��o para retornar tipo
        Id pegaTipo() {return tp;}
        //!Fun��o para imprimir tipo
        std::string stringTipo();
    private:
        //!Fun��o de valida��o do nome do Tipo
        void validaDigito(int)throw (std::invalid_argument);
        Id  tp;
        int digito;
};

class Estadio: public Nome{
 private:
    int capacidade;
    //std::string nome;
    void validaCapacidade(int capacidade) throw(std::invalid_argument);
    void validaNome(std::string) throw (std::invalid_argument);
 public:
     virtual ~Estadio() {}
};


#endif // DOMINIOS_H_INCLUDED
