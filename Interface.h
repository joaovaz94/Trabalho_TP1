#ifndef INTERFACE_H
#define INTERFACE_H

#include "Apresentacao.h"
#include "SGBD.h"
#include "service.h"

class Interface
{
    private:
        Apresentacao tui;
        SGBD bancoDeDados;

    public:
        Interface() {}
        void iniciarPrograma();
};

#endif // INTERFACE_H
