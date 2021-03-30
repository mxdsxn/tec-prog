#include <iostream>
#include <string.h>

#include "./calcControle.hpp"

using namespace std;

CalcControle::CalcControle()
{
}
CalcControle::~CalcControle()
{
 delete this->entradaSaida;
 delete this->memoria;
}

void CalcControle::executar()
{
 cout << "::Executar::" << endl;

 double operandos[2];
 char operacao;

 // RECEBENDO VALORES ATRAVES DA INTERFACE E SALVANDO NA MEMORIA
 operandos[0] = this->entradaSaida->recebeOperando(0);
 this->memoria->setOperando(0, operandos[0]);

 do
 {
  operacao = this->entradaSaida->recebeOperador();
  this->memoria->setOperacao(operacao);

  operandos[1] = this->entradaSaida->recebeOperando(1);
  this->memoria->setOperando(1, operandos[1]);

  // OPERANDO OS VALORES
  operandos[0] = this->memoria->getOperando(0);
  operacao = this->memoria->getOperacao();
  operandos[1] = this->memoria->getOperando(1);

  double resultado = this->operar(operandos[0], operandos[1], operacao);

  this->memoria->setOperando(0, resultado);
  this->entradaSaida->mostraResultado(resultado);
 } while (strcmp("s", &operacao) != 0);

 // ENCERRANDO O PROGRAMA CASO NECESSARIO (TECLA S)
 return;
}

double CalcControle::operar(double operador1, double operador2, char operacao)
{
 double resultado = 0;

 switch (operacao)
 {
 case '+':
 {
  resultado = operador1 + operador2;
 }
 break;

 case '*':
 {
  resultado = operador1 * operador2;
 }
 break;

 case '-':
 {
  resultado = operador1 - operador2;
 }
 break;

 case '/':
 {
  resultado = operador1 / operador2;
 }
 break;
 }

 return resultado;
}
