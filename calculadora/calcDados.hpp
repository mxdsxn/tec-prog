#pragma once

#include "./calcControle.hpp"
#include "./calcInterface.hpp"

class CalcInterface;
class CalcControle;
class CalcDados
{
private:
 double operandos[2];
 char operacao;

public:
 CalcInterface *entradaSaida = nullptr;
 CalcControle *processador = nullptr;

 CalcDados();
 ~CalcDados();

 void setOperando(int i, double valor);
 double getOperando(int i);
 void setOperacao(char op);
 char getOperacao();
};