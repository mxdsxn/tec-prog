#include "string.h"
#include <stdio.h>
#include "./cliente.hpp"

#include <iostream>
using namespace std;

Cliente::Cliente() {}
Cliente::Cliente(char *nome, char *cpf)
{
       this->nome = nome;
       this->cpf = cpf;
}
Cliente::~Cliente()
{
       delete this->cpf;
       delete this->nome;
       delete this->contas;
}

void Cliente::aplicarRecursos(float valor)
{
       int totalContas = 0;
       for (Conta *conta : this->contas)
       {
              if (conta != nullptr)
              {
                     totalContas++;
              }
       }

       float valorPorConta = (valor / totalContas);

       for (Conta *conta : this->contas)
       {
              if (conta != nullptr)
              {
                     conta->depositar(valorPorConta);
              }
       }
}

void Cliente::gerarRelatorio()
{
       char res[1000];
       strcpy(res, "");

       strcat(res, "\nNome: ");
       strcat(res, this->nome);

       strcat(res, "\nCPF: ");
       strcat(res, this->cpf);
       strcat(res, "\nCarteira de aplicacao: ");

       for (int i = 0; i <= 1; i++)
       {
              if (this->contas[i] != nullptr)
              {
                     char saldo[15];
                     sprintf(saldo, "%.2f", this->contas[i]->getSaldo());

                     strcat(res, "\nConta ");
                     strcat(res, this->contas[i]->getNumero());
                     strcat(res, ", saldo ");
                     strcat(res, saldo);
              }
       }

       cout << res << endl;
}

void Cliente::setConta(Conta *novaConta, int posicao)
{
       if (this)
       {
              this->contas[posicao] = novaConta;
       }
}
