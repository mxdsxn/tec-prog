#include "./calcControle.hpp"

class Calculadora
{
public:
 CalcInterface *entradaSaida = nullptr;
 CalcDados *memoria = nullptr;
 CalcControle *processador = nullptr;

 Calculadora();
 ~Calculadora();
}