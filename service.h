#ifndef SERVICE_H_INCLUDED
#define SERVICE_H_INCLUDED

#include "entidades.h"
#include <vector>

struct CartaoCreditoBD{
    std::string num;
    std::string codigoVerificacao;
    std::string validade;
};

struct EstadioBD{
    std::string nome;
};

struct IngressoBD{
    std::string codigo;
    std::string codigoPartida;
    std::string CPF;
};

struct PartidaBD{
    std::string codigo;
    Data data;
    std::string horario;
    double preco;
    int disponibilidade;
    std::string codigoJogo;
    std::vector <IngressoBD> ingressos;
};

struct JogoBD{
    std::string codigo;
    std::string nome;
    std::string estado;
    std::string cidade;
    EstadioBD estadio;
    int tipo;
    //std::string CPF;
    std::vector <PartidaBD> partidas;
};

struct UsuarioBD{
    std::string CPF;
    std::string senha;
    CartaoCreditoBD cartao;
    std::vector <JogoBD> jogos;
};

class BancoDados{
    private:
        std::vector <UsuarioBD> usuarios;
        std::vector <JogoBD> jogos;
    public:
        void checaId(Usuario);
        void checaCod(Partida);
        void checaCod(Jogo);
        void Inserir(Usuario, CartaoCredito);
        void Exlcuir(Usuario);
        void Editar(Usuario);
        void Inserir(Jogo, Usuario, std::vector <Partida>);
        void Excluir(Jogo);
        void Editar(Jogo);
};

class Servicos{
    public:
        Servicos() {}
        static Servicos& pegaInstancia() { //Singleton
            static Servicos instancia;
            return instancia;
        }

        Servicos(Servicos const&) = delete;//Singleton
        void operador() = delete;//Singleton

    private:
        Usuario usuario;
        Jogo jogo;
        void CadastrarJogo();
        void EditarJogo();
        void DescadastrarJogo();

    public:
        void GerenciarJogo(CodigoJogo);
        std::vector <Ingresso> ComprarIngresso(Codigo, int qtdIngComp);
        std::vector <Jogo> ConsultaJogos(Data inicio, Data termino, Cidade, Estado);
        void InfoVenda();
};


#endif // SERVICE_H_INCLUDED
