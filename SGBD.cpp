#include "SGBD.h"

using namespace std;

//!M�todo pra criar queria de insert na tabela usuario
    string SGBD::queryInsertUsuario (Usuario usuario) {
        string query = "INSERT INTO Usuarios VALUES (";
        query += "'" + usuario.pegaCpf().pegaCpf() + "', ";
        query += "'" + usuario.pegaSenha().pegaSenha() + "')";
        return query;
    }
