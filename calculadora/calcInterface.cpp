#include <iostream>
#include "./calcInterface.hpp"

using namespace std;

CalcInterface::CalcInterface() {}
CalcInterface::~CalcInterface()
{
 delete this->memoria;
 delete this->processador;
}

double CalcInterface::recebeOperando(int i)
{
 double operando = 0;
 {
  if (this->memoria)

   cout << "Digite um valor valido: ";
  cin >> operando;

  this->memoria->setOperando(i, operando);
 }
 return operando;
}

char CalcInterface::recebeOperador()
{
 char op = 0;
 if (this->memoria)
 {
  do
  {
   cout << "Selecione um operador (* - + /): ";
   cin >> op;
  } while (op != '+' && op != '*' && op != '-' && op != '/' && op != 's');

  this->memoria->setOperacao(op);
 }
 return op;
}

void CalcInterface::mostraResultado(double resultado)
{
 cout << "Resultado: " << resultado << endl;
}
