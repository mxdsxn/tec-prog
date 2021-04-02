#pragma once

#include <string>

using namespace std;

class Assunto
{
private:
 string conteudo;

public:
 Assunto();
 ~Assunto();

 void setTexto(string novoConteudo);
 string getTexto();
};