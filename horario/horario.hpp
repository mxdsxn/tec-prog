#pragma once

class Horario
{
private:
 int hora, min;

public:
 Horario(int newHora, int newMin);
 ~Horario();

 int getHora();
 int getMin();
 bool setHora(int newHora);
 bool setMin(int newMin);
 int calcularIntervalo(Horario &hora);
};