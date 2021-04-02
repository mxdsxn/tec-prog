#pragma once

#include <string>

using namespace std;

class Mensagem
{
private:
 string conteudo = "";

public:
 Mensagem();
 ~Mensagem();

 void addMensagem(string novoConteudo);
 string getMensagem();
};