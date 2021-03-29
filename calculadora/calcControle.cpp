#include "./calcControle.hpp"

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
}

double CalcControle::operar(double operador1, double operador2, char operacao)
{
 double resultado = 0;

 switch (operacao)
 {
 case "+":
 {
  resultado = operador1 + operador2;
 }
 break;

 case "*":
 {
  resultado = operador1 * operador2;
 }
 break;

 case "-":
 {
  resultado = operador1 - operador2;
 }
 break;

 case "/":
 {
  resultado = operador1 / operador2;
 }
 break;
 }

 return resultado;
}
