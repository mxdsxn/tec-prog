#include <iostream>
#include "./horario.hpp"
using namespace std;

Horario::Horario(int newHora, int newMin)
{
 setHora(newHora);
 setMin(newMin);
}
Horario::~Horario() {}
int Horario::getHora()
{
 return this->hora;
}
int Horario::getMin()
{
 return this->min;
}
bool Horario::setHora(int newHora)
{
 if (newHora >= 0 && newHora <= 23)
 {
  this->hora = newHora;
  return true;
 }
 return false;
}
bool Horario::setMin(int newMin)
{

 if (newMin >= 0 && newMin <= 59)
 {
  this->min = newMin;
  return true;
 }
 return false;
}
int Horario::calcularIntervalo(Horario &saida)
{
 int difHora = saida.hora - this->hora;
 int difMin = saida.min - this->min;

 if (difHora < 0)
 {
  difHora += 24;
 }

 if (difMin < 0)
 {
  difMin += 60;
  difHora--;
 }
 cout << saida.min << endl
      << this->min << endl
      << difMin << endl;

 cout
     << difHora << "h" << difMin << endl;
 return (difMin + (difHora * 60));
}