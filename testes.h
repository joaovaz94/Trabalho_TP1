//!Trabalho desenvolvido por:
//!João Paulo Vaz Mendes - Matrícula: 170002934
//!Lucas de Moura Quadros - Matrícula: 140150668

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include <string>


/**Teste de Unidade da Classe do Domínio Data*/
class TUData {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    Data *data;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método que para executar o teste
    int executar();
};
/**Testede Unidade da Classe do Domínio Cpf*/
class TUCpf {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
     Cpf *cpf;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método que para executar o teste
    int executar();
};
/**Testede Unidade da Classe do Domínio Horário*/
class TUHorario {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    Horario *horario;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método que para executar o teste
    int executar();
};
/**Testes de Unidade da Classe Código*/
class TUCodigo {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    Codigo *codigo;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método que para executar o teste
    int executar();
};
/**Testede Unidade da Classe do Domínio Preco*/
class TUPreco {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    const static double VALOR_VALIDO;
    const static double VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    Preco *preco;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método que para executar o teste
    int executar();
};
/**Testede Unidade da Classe do Domínio Disponobilidade*/
class TUDisp {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    const static int VALOR_VALIDO   = 200;
    const static int VALOR_INVALIDO = -30;
    //! Referência para o objeto a ser testado.
     Disponibilidade *disp;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método que para executar o teste
    int executar();
};
/**Testes de Unidade da Classe Senha*/
class TUSenha {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    Senha *senha;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TU
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TU
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método que para executar o teste
    int executar();
};
/**Testes de Unidade da Classe CodigoVerificacao*/
class TUCodVer {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    CodigoVerificacao *codigo;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TUCodVer
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TUCodVer
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método que para executar o teste
    int executar();
};
/**Testes de Unidade da Classe CodigoJogo*/
class TUCodJogo {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    CodigoJogo *codigo;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TUCodJogo
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TUCodJogo
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método que para executar o teste
    int executar();
};
/**Testes de Unidade da Classe CodigoIngresso*/
class TUCodIng {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    CodigoIngresso *codigo;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TUCodIng
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TUCodIng
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método que para executar o teste
    int executar();
};
/**Testes de Unidade da Classe Estado*/
class TUEstado {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    Estado *est;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TUEstado
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TUEstado
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método para executar o teste
    int executar();
};
/**Testes de Unidade da Classe NumCartao*/
class TUNumCartao {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    NumCartao *numero;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TUNumCartao
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TUNumCartao
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método para executar o teste
    int executar();
};
/**Testes de Unidade da Classe Validade*/
class TUValidade {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    Validade *validade;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TUValidade
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TUValidade
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método para executar o teste
    int executar();
};
/**Testes de Unidade da Classe NomeJogo*/
class TUNomeJogo {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    NomeJogo *nome;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TUNomeJogo
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TUNomeJogo
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método para executar o teste
    int executar();
};
/**Testes de Unidade da Classe Cidade*/
class TUCidade {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;
    //! Referência para o objeto a ser testado.
    Cidade *cidade;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TUCidade
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TUCidade
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método para executar o teste
    int executar();
};
/**Testes de Unidade da Classe Tipo*/
class TUTipo {
 private:
    //! Definições de constantes com o intuito de evitar numeros mágicos.
    const static int VALOR_VALIDO   = 2;
    const static int VALOR_INVALIDO = -3;
    //! Referência para o objeto a ser testado.
    Tipo *tipo;
    //! Estado do teste
    int estado;
    //!Declaração dos métodos do TUTipo
    void montar();
    void destruir();
    void testarCenarioSucesso();
    void testarCenarioFalha();
 public:
    //! Definições de constantes para reportar resultado do TUTipo
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    //!Método que para executar o teste
    int executar();
};

#endif // TESTES_H_INCLUDED
