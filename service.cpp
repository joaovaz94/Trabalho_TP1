#include "Interface.h"
#include "service.h"

using namespace std;

/*void BancoDados::Inserir(Usuario usuario, CartaoCredito cartao){

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
*/

void Servicos::AutenticarUsuario(std::string cpf, std::string senha){

    int r;
    Cpf CPF;
    Senha SENHA;

    try{
    CPF.defineCpf(cpf);
    SENHA.defineSenha(senha);
    usuario.defineCpf(CPF);
    usuario.defineSenha(SENHA);
    }
    catch(invalid_argument){
    cout << "\n\n Argumentos inválidos \n\n";
    }
    try{
    r = bancoDados.autenticaUsuario(usuario);
    }
    catch(int r){
        if (r>0){
            cout <<"\n\n Usuário autenticado com sucesso. \n\n";
        }
        else{
            cout <<"\n\n Usuário não autenticado \n\n";
        }
    }
}

void Servicos::CadastrarUsuario(std::string cpf, std::string senha, std::string numCart, std::string cvc, std::string validade){

    int r;
    Cpf CPF;
    Senha SENHA;
    NumCartao NUMCART;
    CodigoVerificacao CVC;
    Validade VAL;
    CartaoCredito card;

    try{
    CPF.defineCpf(cpf);
    SENHA.defineSenha(senha);
    NUMCART.defineNumCartao(numCart);
    CVC.defineCodigo(cvc);
    VAL.defineValidade(validade);
    card.defineNumCartao(NUMCART);
    card.defineCodVer(CVC);
    card.defineValidade(VAL);

    usuario.defineCpf(CPF);
    usuario.defineSenha(SENHA);
    }
    catch(invalid_argument){
    cout << "\n\n Argumentos inválidos \n\n";
    }

    r = bancoDados.insereUsuarioBD(usuario,card);

}

void Servicos::DescadastrarUsuario(){

    int r;

    r = bancoDados.descadastraUsuario (usuario);

}

void Servicos::CadastrarJogo(std::string cod_jg, std::string Nome, std::string estadio, std::string cidade, std::string estado, std::string cod_part, std::string data, std::string hrr, double prc){

    int r;
    Jogo jg; Partida part;
    CodigoJogo COD_JG; NomeJogo NOME; Estadio ESTADIO; Cidade CIDADE; Estado ESTADO;
    Codigo COD_PART; Data DATA; Horario HRR; Preco PRC; Disponibilidade DISP;

    try{
    COD_JG.defineCodJogo(cod_jg);
    NOME.defineNome(Nome);
    ESTADIO.defineNome(estadio);
    CIDADE.defineNome(cidade);
    ESTADO.defineEstado(estado);
    jg.defineCodJogo(COD_JG);
    jg.defineNomeJogo(NOME);
    jg.defineEstadio(ESTADIO);
    jg.defineCidade(CIDADE);
    jg.defineEstado(ESTADO);

    COD_PART.defineCodigo(cod_part);
    DATA.defineData(data);
    HRR.defineHorario(hrr);
    PRC.definePreco(prc);
    DISP.defineDisp(250);
    part.defineCodigo(COD_PART);
    part.defineData(DATA);
    part.defineHorario(HRR);
    part.definePreco(PRC);
    }
    catch(invalid_argument){
    cout << "\n\n Argumentos inválidos \n\n";
    }

    r = bancoDados.insereJogo(jg, part, usuario);

}

void Servicos::EditarJogo(string cod_jg){

}

void Servicos::DescadastrarJogo(string cod_jg){

}

void Servicos::ComprarIngressos(std::string cod, int qtdIngComp){



}









