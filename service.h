#ifndef SERVICE_H_INCLUDED
#define SERVICE_H_INCLUDED

#include "entidades.h"
#include <vector>

std::vector <Usuario> usuarios;
std::vector <CartaoCredito> cartoes;
std::vector <Jogo> jogos;
std::vector <Partida> partidas;

class Sistema;

class LidarUsuario{

    friend class Sistema;

    private:
        Usuario usuario;
        CartaoCredito cartao;
        std::vector <Jogo> jogosUsuario;

    public:
        void CadastrarUsuario(Usuario usuario, CartaoCredito cartao);
        void AutenticarUsuario(Usuario usuario);
        void DescadastrarUsuario(Usuario, std::vector <Jogo> jogosUsuario);

};

class Sistema{

    private:
        Jogo jogo;
        std::vector <Partida> partidasJogo;

    public:
        std::vector <Ingresso> ComprarIngresso(Partida, int qtdIngComp);
        std::vector <Jogo> ConsultaJogos(Data inicio, Data termino, Cidade, Estado);
        void CadastrarJogo(Jogo jogo, Partida partida);
        void EditarJogo(Jogo jogo);
        void DescadastrarJogo(Jogo jogo);
        void InfoVenda(Jogo jogo, Partida* partida, Usuario* usuario);

};


#endif // SERVICE_H_INCLUDED
