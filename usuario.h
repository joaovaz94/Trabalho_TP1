#ifndef USUARIO_H
#define USUARIO_H


class usuario
{
    public:
        usuario();
        virtual ~usuario();

        unsigned int Getm_Counter() { return m_Counter; }
        void Setm_Counter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // USUARIO_H
