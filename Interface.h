#ifndef INTERFACE_H
#define INTERFACE_H

class Interface
{
    private:
        char operacao;

    public:
        Interface() {}
        static Interface& pegaInstancia() {//Singleton
            static Interface instancia;
            return instancia;
        }

        Interface(Interface const&) = delete;//Singleton
        void operador() = delete;//Singleton
        //!
};

#endif // INTERFACE_H
