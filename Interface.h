#ifndef INTERFACE_H
#define INTERFACE_H

class Interface
{
    private:
        //char operacao;

    public:
        Interface() {}

        //!Classes abstratas
        virtual void cadastrar() = 0;
        virtual void editar() = 0;
        virtual void descadastrar() = 0;
        virtual void buscarInformacao() = 0;
};

#endif // INTERFACE_H
