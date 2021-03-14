#include <iostream>
#include "./horario.hpp"

#pragma once

using namespace std;

class HorarioTest
{
private:
 Horario *entrada;
 Horario *saida;
 float valorFinal(int intervaloMinuto);

public:
 HorarioTest();
 ~HorarioTest();
 void exec();
};