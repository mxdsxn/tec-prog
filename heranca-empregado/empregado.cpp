#pragma once
#include <string>

using namespace std;

Empregado::Empregado(string nome, string cpf, string cargo){
    this->nome = nome;
    this->cpf = cpf;
    this->cargo = cargo;
}

Empregado::~Empregado(){}

void mostraDados()
{
    cout << "Nome: " << this->nome << endl
         << "Cpf: " << this->cpf << endl
         << "Cargo: " << this->cargo << endl;
}

float calculaSalario(float horasTrabalhadas)
{
    return 415;
}
