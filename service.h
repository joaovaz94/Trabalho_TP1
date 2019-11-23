#ifndef SERVICE_H_INCLUDED
#define SERVICE_H_INCLUDED

#include "entidades.h"
#include <vector>

std::vector <Usuario> usuarios;
std::vector <CartaoCredito> cartoes;
std::vector <Jogo> jogos;
std::vector <Partida> partidas;

class LidarUsuario{

    friend class Sistema;

    private:
        Usuario usuario;
        CartaoCredito cartao;
        std::vector <Jogo> jogosUsuario;

    public:
        void CadastrarUsuario(Usuario usuario, CartaoCredito cartao);
        void AutenticarUsuario(Usuario usuario);
        void DescadastrarUsuario(Usuario usuario, std::vector <Jogo> jogosUsuario);
        Sistema.partidasJogo PesquisarJogos(Data inicio, Data termino, Cidade, Estado);

};

class Sistema{

    private:
        Jogo jogo;
        std::vector <Partida> partidasJogo;

    public:



};


#endif // SERVICE_H_INCLUDED
