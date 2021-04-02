#include "Mensagem.hpp"
#include <iostream>

Mensagem::Mensagem() {}
Mensagem::~Mensagem() {}

void Mensagem::addMensagem(string novoConteudo)
{
 if (this)
 {
  // char tmp[1000];
  // strcpy(tmp, "");
  // strcat(tmp, this->conteudo);
  // strcat(tmp, novoConteudo);
  // std::cout << tmp << endl;
  this->conteudo = this->conteudo + novoConteudo;
 }
}

string Mensagem::getMensagem()
{
 if (this)
 {
  return this->conteudo;
 }
 return "";
}