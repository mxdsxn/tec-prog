#include "./conta.hpp"

#pragma once

class Cliente
{
private:
 char *cpf = "";
 char *nome = "";
 Conta *contas[2];

public:
 Cliente();
 Cliente(char *nome, char *cpf);
 ~Cliente();

 void gerarRelatorio();
 void aplicarRecursos(float valor);
 void setConta(Conta *novaConta, int posicao);
};