#include "./calcDados.hpp"

CalcDados::CalcDados()
{
}
CalcDados::~CalcDados()
{
 delete this->entradaSaida;
 delete this->processador;
}

void setOperando(int i, double valor)
{
 if (this)
 {
  this->operando[i] = valor;
 }
}

double getOperando(int i)
{
 if (this)
 {
  return this->operando[i];
 }
 return 0;
}

void setOperacao(char op)
{
 if (this)
 {
  this->operacao = op;
 }
}

char getOperacao()
{
 if (this)
 {
  return this->operacao;
 }
 return "";
}
