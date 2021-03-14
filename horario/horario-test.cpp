#include "./horario-test.hpp"

HorarioTest::HorarioTest() {}
HorarioTest::~HorarioTest() {}

void HorarioTest::exec()
{
 int horaEntrada, horaSaida, minEntrada, minSaida;

 do
 {
  cout << "1- Informe Hora e Min de Entrada:" << endl;
  cin >> horaEntrada;
  cin >> minEntrada;
 } while ((horaEntrada < 0 || horaEntrada > 23) || (minEntrada < 0 || minEntrada > 59));

 do
 {
  cout << "2- Informe Hora e Min Saida:" << endl;
  cin >> horaSaida;
  cin >> minSaida;
 } while ((horaSaida < 0 || horaSaida > 23) || (minSaida < 0 || minSaida > 59));

 this->entrada = new Horario(horaEntrada, minEntrada);
 this->saida = new Horario(horaSaida, minSaida);

 int intervaloMinuto = entrada->calcularIntervalo(*saida);
 float valorFinal = this->valorFinal(intervaloMinuto);

 cout << "Total a pagar: R$" << valorFinal << endl;
}

float HorarioTest::valorFinal(int intervaloMinuto)
{
 int horaEmMinuto = 60;
 if (intervaloMinuto < horaEmMinuto * 3)
 {
  return 4.5;
 }
 if (intervaloMinuto <= horaEmMinuto * 12)
 {
  return (((intervaloMinuto - (horaEmMinuto * 3)) / 15) * 0.75) + 4.5;
 }
 if (intervaloMinuto > horaEmMinuto * 12)
 {
  return 33;
 }
}
