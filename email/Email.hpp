#pragma once

#include "Assunto.hpp"
#include "Mensagem.hpp"
#include <string>

using namespace std;

class Email
{
private:
 Assunto *assunto;
 Mensagem *mensagem;

public:
 Email();
 ~Email();

 void setConteudoAssunto(string novoAssunto);
 void addTextoMensagem(string novaMensagem);
 void mostrarDados();
};
