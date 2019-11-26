#ifndef INTERFACE_H
#define INTERFACE_H

#include "Apresentacao.h"
#include "SGBD.h"
//#include "service.h"

class Interface
{
    private:
        Apresentacao tui;
        SGBD bancoDeDados;
        char operacao;

    public:
        Interface() {}
        void iniciarPrograma();
        void operacaoInicial(char opr);
        void operacaoCadastro();
        void fecharPrograma();
};

#endif // INTERFACE_H
