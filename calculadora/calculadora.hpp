#pragma once

#include "./calcInterface.hpp"
#include "./calcControle.hpp"
#include "./calcDados.hpp"

class Calculadora
{
public:
 CalcInterface *entradaSaida = nullptr;
 CalcDados *memoria = nullptr;
 CalcControle *processador = nullptr;

 Calculadora();
 ~Calculadora();

 void iniciar();
};