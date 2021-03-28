#include <iostream>
#include "./conta.hpp"

using namespace std;

Conta::Conta() {}
Conta::Conta(char *numero)
{
     this->numero = numero;
}
Conta::~Conta() {}

void Conta::sacar(float valor)
{
     if (this)
     {
          cout << "<----------------------------------------" << endl
               << "Saque de " << valor << "R$" << endl;
          if (this->getSaldo() < valor)
               cout << "Valor nao disponivel." << endl;
          else
          {
               this->saldo -= valor;
               cout << "Sacando " << valor << "R$" << endl;
               cout << "Saldo restante: " << this->getSaldo() << "R$" << endl;
          }
          cout << "---------------------------------------->" << endl;
     }
}

void Conta::depositar(float valor)
{
     if (this)
     {
          cout << "<----------------------------------------" << endl
               << "Deposito de " << valor << "R$" << endl;
          this->saldo += valor;
          cout << "---------------------------------------->" << endl;
     }
}

float Conta::getSaldo()
{
     if (this)
     {
          return this->saldo;
     }
     return 0;
}

char *Conta::getNumero()
{
     if (this)
     {
          return this->numero;
     }
     return nullptr;
}