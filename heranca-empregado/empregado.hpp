#pragma once
#include <string>

using namespace std;

class Empregado
{
protected:
    string nome;
    string cpf;
    string cargo;

public:
    Empregado(string nome, string cpf, string cargo);
    ~Empregado();

    void mostraDados();
    float calculaSalario(float horasTrabalhadas);
};