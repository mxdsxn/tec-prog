#include "Assunto.hpp"

Assunto::Assunto() {}
Assunto::~Assunto() {}

void Assunto::setTexto(string novoConteudo)
{
 if (this)
 {
  this->conteudo = novoConteudo;
 }
}

string Assunto::getTexto()
{
 if (this)
 {
  return this->conteudo;
 }
 return "";
}