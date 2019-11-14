//!Trabalho desenvolvido por:
//!Jo�o Paulo Vaz Mendes - Matr�cula: 170002934
//!Lucas de Moura Quadros - Matr�cula: 140150668

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include <string>


/**Teste de Unidade da Classe do Dom�nio Data*/
class TUData {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    Data *data;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo que para executar o teste
    int executar();
};
/**Testede Unidade da Classe do Dom�nio Cpf*/
class TUCpf {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
     Cpf *cpf;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo que para executar o teste
    int executar();
};
/**Testede Unidade da Classe do Dom�nio Hor�rio*/
class TUHorario {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    Horario *horario;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo que para executar o teste
    int executar();
};
/**Testes de Unidade da Classe C�digo*/
class TUCodigo {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    Codigo *codigo;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo que para executar o teste
    int executar();
};
/**Testede Unidade da Classe do Dom�nio Preco*/
class TUPreco {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    const static double VALOR_VALIDO;
    const static double VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    Preco *preco;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo que para executar o teste
    int executar();
};
/**Testede Unidade da Classe do Dom�nio Disponobilidade*/
class TUDisp {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    const static int VALOR_VALIDO   = 200;
    const static int VALOR_INVALIDO = -30;
    //! Refer�ncia para o objeto a ser testado.
     Disponibilidade *disp;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo que para executar o teste
    int executar();
};
/**Testes de Unidade da Classe Senha*/
class TUSenha {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    Senha *senha;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo que para executar o teste
    int executar();
};
/**Testes de Unidade da Classe CodigoVerificacao*/
class TUCodVer {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    CodigoVerificacao *codigo;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TUCodVer
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TUCodVer
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo que para executar o teste
    int executar();
};
/**Testes de Unidade da Classe CodigoJogo*/
class TUCodJogo {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    CodigoJogo *codigo;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TUCodJogo
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TUCodJogo
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo que para executar o teste
    int executar();
};
/**Testes de Unidade da Classe CodigoIngresso*/
class TUCodIng {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    CodigoIngresso *codigo;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TUCodIng
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TUCodIng
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo que para executar o teste
    int executar();
};
/**Testes de Unidade da Classe Estado*/
class TUEstado {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    Estado *est;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TUEstado
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TUEstado
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo para executar o teste
    int executar();
};
/**Testes de Unidade da Classe NumCartao*/
class TUNumCartao {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    NumCartao *numero;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TUNumCartao
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TUNumCartao
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo para executar o teste
    int executar();
};
/**Testes de Unidade da Classe Validade*/
class TUValidade {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    Validade *validade;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TUValidade
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TUValidade
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo para executar o teste
    int executar();
};
/**Testes de Unidade da Classe NomeJogo*/
class TUNomeJogo {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    NomeJogo *nome;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TUNomeJogo
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TUNomeJogo
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo para executar o teste
    int executar();
};
/**Testes de Unidade da Classe Cidade*/
class TUCidade {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Refer�ncia para o objeto a ser testado.
    Cidade *cidade;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TUCidade
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TUCidade
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo para executar o teste
    int executar();
};
/**Testes de Unidade da Classe Tipo*/
class TUTipo {
 private:
    //! Defini��es de constantes com o intuito de evitar numeros m�gicos.
    const static int VALOR_VALIDO   = 2;
    const static int VALOR_INVALIDO = -3;
    //! Refer�ncia para o objeto a ser testado.
    Tipo *tipo;
    //! Estado do teste
    int estado;
    //!Declara��o dos m�todos do TUTipo
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Defini��es de constantes para reportar resultado do TUTipo
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!M�todo que para executar o teste
    int executar();
};

#endif // TESTES_H_INCLUDED
