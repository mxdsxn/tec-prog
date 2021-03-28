#pragma once

class Carro
{
private:
 float kmPorLitro = 0, capacidadeCombustivel = 0, combustivel = 0;

public:
 Carro(float kmPorLitro, float capacidadeCombustivel);
 ~Carro();

 void andar(float distanciaEmKm);
 float getCombustivel();
 void abastecer(float litros);
};