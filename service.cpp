#include "Interface.h"
#include "service.h"

using namespace std;

void BancoDados::Inserir(Usuario usuario, CartaoCredito cartao){

    UsuarioBD usuarioBD;

    usuarioBD.CPF = usuario.pegaCpf().pegaCpf();
    usuarioBD.senha = usuario.pegaSenha().pegaSenha();
    usuarioBD.cartao.num = cartao.pegaNumCartao().pegaNumCartao();
    usuarioBD.cartao.validade = cartao.pegaValidade().pegaValidade();
    usuarioBD.cartao.codigoVerificacao = cartao.pegaCodVer().pegaCodigo();

    usuarios.push_back(usuarioBD);

}

void BancoDados::Inserir(Jogo jogo, Usuario usuario, vector <Partida> partidas){

    UsuarioBD usuarioBD;
    JogoBD jogoBD;
    PartidaBD partidaBD;

    jogoBD.cidade = jogo.pegaCidade().pegaNome();
    jogoBD.codigo = jogo.pegaCodJogo().pegaCodigo();
    //jogoBD.CPF = usuario.pegaCpf();
    jogoBD.estadio.nome = jogo.pegaEstadio().pegaNome();
    jogoBD.estado = jogo.pegaEstado().pegaEstado();
    jogoBD.nome = jogo.pegaNomeJogo().pegaNome();
    jogoBD.tipo = jogo.pegaTipo().pegaTipo();

    for(int i=0; i<partidas.size(); i++){
        partidaBD.codigo = partidas[i].pegaCodigo().pegaCodigo();
    }

}

