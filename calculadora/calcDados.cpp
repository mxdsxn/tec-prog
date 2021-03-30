#include "./calcDados.hpp"

CalcDados::CalcDados()
{
}
CalcDados::~CalcDados()
{
 delete this->entradaSaida;
 delete this->processador;
}

void CalcDados::setOperando(int i, double valor)
{
 if (this)
 {
  this->operandos[i] = valor;
 }
}

double CalcDados::getOperando(int i)
{
 if (this)
 {
  return this->operandos[i];
 }
 return 0;
}

void CalcDados::setOperacao(char op)
{
 if (this)
 {
  this->operacao = op;
 }
}

char CalcDados::getOperacao()
{
 char resultado = (char)0;
 if (this)
 {
  resultado = this->operacao;
 }

 return resultado;
}
