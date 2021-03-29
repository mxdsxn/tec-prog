#include "./calculadora.hpp"

Calculadora::Calculadora()
{
 this->entradaSaida = new CalcInterface();
 this->memoria = new CalcDados();
 this->processador = new CalcControle();

 // this->entradaSaida->memoria = this->memoria;
 // this->entradaSaida->processador = this->processador;

 // this->memoria->entradaSaida = this->entradaSaida;
 // this->memoria->processador = this->processador;

 // this->processador->memoria = this->memoria;
 // this->processador->entradaSaida = this->entradaSaida;
}

Calculadora::~Calculadora()
{
 delete this->entradaSaida;
 delete this->memoria;
 delete this->processador;
}
