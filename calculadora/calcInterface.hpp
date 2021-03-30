#pragma once

#include "./calcControle.hpp"
#include "./calcDados.hpp"

class CalcDados;
class CalcControle;
class CalcInterface
{
public:
 CalcDados *memoria = nullptr;
 CalcControle *processador = nullptr;

 CalcInterface();
 ~CalcInterface();

 double recebeOperando(int i);
 char recebeOperador();
 void mostraResultado(double resultado);
};