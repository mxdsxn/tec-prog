#include <iostream>
#include "./carro.hpp"

using namespace std;

Carro::Carro(float kmPorLitro, float capacidadeCombustivel)
{
 this->capacidadeCombustivel = capacidadeCombustivel;
 this->kmPorLitro = kmPorLitro;
}
Carro::~Carro()
{
}

void Carro::andar(float distanciaEmKm)
{
 if (this)
 {
  float combustivelNecessario = (distanciaEmKm / this->kmPorLitro);
  bool temCombustivelNecessario = this->combustivel >= combustivelNecessario;

  cout << "<-----------------------------------------------" << endl;

  cout << "** Andar " << distanciaEmKm << "km" << endl;

  if (temCombustivelNecessario)
  {
   cout << "Andando " << distanciaEmKm << "km" << endl;
   this->combustivel -= combustivelNecessario;
  }
  else
  {
   cout << "Andando " << this->kmPorLitro * this->combustivel << "km, pois acabou o combustivel." << endl;
   this->combustivel = 0;
  }
  cout << "Combustivel restante: " << this->combustivel << "litros." << endl
       << "----------------------------------------------->" << endl;
 }
}

float Carro::getCombustivel()
{
 if (this)
 {
  return this->combustivel;
 }
 return 0;
}

void Carro::abastecer(float litros)
{
 if (this)
 {
  cout << "<-----------------------------------------------" << endl;
  cout << "** Abastecer " << litros << "litros" << endl;

  if (this->capacidadeCombustivel >= this->combustivel + litros)
  {
   cout << "Abastecendo " << litros << "litros." << endl;
   this->combustivel += litros;
  }
  else
  {
   cout << "Abastecendo " << this->capacidadeCombustivel - this->combustivel << "litros apenas. "
        << "Tanque no limite." << endl;
   this->combustivel = this->capacidadeCombustivel;
  }

  cout << "Combustivel: " << this->combustivel << "litros." << endl
       << "----------------------------------------------->" << endl;
 }
}