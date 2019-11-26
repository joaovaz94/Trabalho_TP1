//!Trabalho desenvolvido por:
//!João Paulo Vaz Mendes - Matrícula: 170002934
//!Lucas de Moura Quadros - Matrícula: 140150668

#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
#include <stdexcept>

class Data {
    public:
        //!construtor da classe Data
        Data (int d=1,int m=1,int a=2000);
        //!função para retornar data como string
        std::string viraString();
        //!função para retornar data como string nos moldes do tipo date de SQL
        std::string viraStringDB();
        //!função para definir os valores de data
        void defineData(int d,int m,int a);
        //!função para definir data a partir de string
        void defineData(std::string dt);
        //!Função para tratar números de dia e mês
        std::string  trataNum(int num);
        //!Função para validar data a partir dos atributos int
        void validaData (int& d,int& m,int& a) throw (std::invalid_argument);
        //!Função para validar data a partir do atributo string
        void validaData (std::string& dt) throw (std::invalid_argument);
    private:
        int dia, mes, ano;
        std::string data;
};

class Cpf {
 private:
        std::string codigo;
        //!Função para validar o Cpf ou não
        void validaCpf (std::string& cod) throw (std::invalid_argument);
 public:
        //!Função para definir o número do cpf
        void defineCpf(std::string cod);
        //!função para retornar o CPF
        std::string pegaCpf() {return codigo;}
};

class Horario {
 private:
        int hora,minuto;
        std::string horario;
 public:
        //!Construtor da classe
        Horario (int h=12,int m=0);
        //!Função para definir os valores do objeto
        void defineHorario (int h,int m);
        //!Função para defninir horário a partir de string
        void defineHorario(std::string hrr);
        //!Função para retornar o Horário como string
        std::string viraString();
        //!Função para tratar números de hora e minuto
        std::string  trataNum(int& num);
        //!função para validar horário dentro dos limites necessários
        void validaHorario (int& h,int& m) throw (std::invalid_argument);
        //!função para validar a string horário para q seja válida
        void validaHorario (std::string& hrr) throw (std::invalid_argument);
};

class Codigo {
 protected:
        std::string codigo;
        //!Função para validar Código
        void validaCodigo (std::string& cod) throw (std::invalid_argument);
 public:
        //!Função para definir Código
        void defineCodigo (std::string cod);
        //!Função para retornar Código
        std::string pegaCodigo() {return codigo;}
};

class Preco {
 private:
        double preco;
 public:
        //!Função para definir Preço
        void definePreco (double prc);
        //!Função para retornar Preço
        double pegaPreco() {return preco;}
        //!Função para validar Preço
        void validaPreco (double& prc) throw (std::invalid_argument);
};

class Disponibilidade {
 private:
        int disponibilidade;
 public:
        //!Função para definir Disponibilidade
        void defineDisp (int dsp);
        //!Função para validar Disponibilidade
        void validaDisp (int& dsp) throw (std::invalid_argument);
        //!Função para retornar Disponibilidade
        int pegaDisp() {return disponibilidade;}
};

class Senha {
 private:
        std::string senha;
        //!Função para validar Senha
        void validaSenha (std::string& sn) throw (std::invalid_argument);
 public:
        //!Função para definir Senha
        void defineSenha (std::string sn);
        //!Função para retornar Senha
        std::string pegaSenha() {return senha;}
};
//!Classe do Código de verificação do cartão CVC
class CodigoVerificacao: public Codigo { //!classe que herda classe Código
 private:
        //!Função para validar CVC
        void validaCodVer (std::string& cod) throw (std::invalid_argument);
 public:

        //!Função para definir CVC
        void defineCodVer (std::string cod);

};
//!Classe do código do Jogo
class CodigoJogo: public Codigo {
 private:
        //!Função para validar código do Jogo
        void validaCodJogo (std::string& cod) throw (std::invalid_argument);
 public:
        //!Função para definir o Código do Jogo
        void defineCodJogo (std::string cod);
};
//!Classe do código do Ingresso
class CodigoIngresso: public Codigo {
 private:
        //!Função para validar o Código do Ingresso
        void validaCodIng (std::string& cod) throw (std::invalid_argument);
 public:
        //!Função para validar o Código do Ingresso
        void defineCodIng (std::string cod);
};
//!classe do Estado
class Estado {
 private:
        std::string estado;
        //!Definição de strings constantes de Estados
        static const std::string estados[];
        //!Função para validar estado
        void validaEstado (std::string& est) throw (std::invalid_argument);
 public:
        //!Função para definir o estado
        void defineEstado (std::string est);
        //!Função para retornar estado
        std::string pegaEstado () {return estado;}
};
//!Classe do Domínio Número de Cartão de Crédito
class NumCartao {
 private:
        std::string numero;
        //!Função para validar número de cartão de crédito
        void validaNumCartao (std::string& num) throw (std::invalid_argument);
 public:
        //!Função para definir número de cartão de crédito
        void defineNumCartao (std::string num);
        //!Função para retornar número do cartão de crédito
        std::string pegaNumCartao () {return numero;}
};
//!Classe do Domínio Data de Validade
class Validade {
 private:
        std::string validade;
        //!Função para validar a data de validade
        void validaValidade (std::string& val) throw (std::invalid_argument);
 public:
        //!Função para definir a data de validade
        void defineValidade (std::string val);
        //!Função para retornar a data de validade
        std::string pegaValidade() {return validade;}
};
//!Classe Genérica Nome
class Nome {
    public:
        //!Função para definir Nome
        void defineNome(std::string n){
            validaNome(n);
            this->nome=n;
        }
        //!Definição genérica de validação do nome
        virtual void validaNome(std::string) throw (std::invalid_argument) = 0;
        //!Função para retornar Nome
        std::string pegaNome() {return nome;}
    protected:
        std::string nome;
};
//!Classe do domínio Nome de Jogo que herda da classe Nome
class NomeJogo: public Nome{
    private:
        //!Função de validação do nome do Jogo
        void validaNome(std::string) throw (std::invalid_argument);
    public:
        //!Destrutor virtual para excluir objeto da classe sem problema no polimorphismo
        virtual ~NomeJogo() {}
};
//!Classe do domínio Cidade que herda da classe Nome
class Cidade: public Nome{
    private:
        //!Função de validação do nome da Cidade
        void validaNome(std::string) throw (std::invalid_argument);
    public:
        //!Destrutor virtual para excluir objeto da classe sem problema no polimorphismo
        virtual ~Cidade() {}
};
//!Definição de tipos  enum dos tipos da classe Tipo
enum Id{LOCAL=1, ESTADUAL, NACIONAL, INTERNACIONAL};
//!Classe do domínio Tipo
class Tipo{
    public:
        //!Função de definição do tipo
        void defineTipo(int d);
        //!Função para retornar tipo
        Id pegaTipo() {return tp;}
        //!Função para imprimir tipo
        std::string stringTipo();
    private:
        //!Função de validação do nome do Tipo
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
