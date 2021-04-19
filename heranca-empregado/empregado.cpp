#include <string>
#include <iostream>
#include "./empregado.hpp"

using namespace std;

Empregado::Empregado(string nome, string cpf, string cargo)
{
    this->nome = nome;
    this->cpf = cpf;
    this->cargo = cargo;
}

Empregado::~Empregado() {}

void Empregado::mostraDados()
{
    if (this)
    {

        cout << "Nome: " << this->nome << endl
             << "Cpf: " << this->cpf << endl
             << "Cargo: " << this->cargo << endl;
    }
}

float Empregado::calculaSalario(float horasTrabalhadas)
{
    return 415;
}
