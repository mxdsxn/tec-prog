#include "./calcControle.hpp"
#include "./calcDados.hpp"

class CalcInterface
{
public:
 CalcDados *memoria = nullptr;
 CalcControle *processador = nullptr;

 CalcInterface();
 ~CalcInterface();

 double recebeOperando(int i);
 char recebeOperador(char op);
 void mostraResultado(double resultado);
};