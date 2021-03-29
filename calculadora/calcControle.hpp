#include "./calcDados.hpp"
#include "./calcInterface.hpp"

class CalcControle
{
public:
 CalcInterface *entradaSaida = nullptr;
 CalcDados *memoria = nullptr;

 CalcControle();
 ~CalcControle();

 void executar();

private:
 double operar(double operador1, double operador2, char operacao);
};