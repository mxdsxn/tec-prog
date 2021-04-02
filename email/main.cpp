#include <iostream>
#include "Email.hpp"
#include <string>

using namespace std;
int main()
{
 Email *email1 = new Email();
 string assunto, mensagem;

 cout << "Digite o assunto do Email: " << endl;
 getline(cin, assunto);

 cout << "Digite a mensagem do Email: " << endl;
 getline(cin, mensagem);

 email1->setConteudoAssunto(assunto);
 email1->addTextoMensagem(mensagem);

 email1->mostrarDados();

 return 1;
}