#include <iostream>
#include "Email.hpp"

using namespace std;

Email::Email()
{
 this->assunto = new Assunto();
 this->mensagem = new Mensagem();
}
Email::~Email() {}

void Email::addTextoMensagem(string novaMensagem)
{
 if (this)
 {
  this->mensagem->addMensagem(novaMensagem);
 }
}

void Email::setConteudoAssunto(string novoAssunto)
{
 if (this)
 {
  this->assunto->setTexto(novoAssunto);
 }
}

void Email::mostrarDados()
{
 if (this)
 {
  cout << "Assunto: " << this->assunto->getTexto() << endl;
  cout << "Mensagem: " << this->mensagem->getMensagem() << endl;
 }
}