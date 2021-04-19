#pragma once
#include <string>
#include "./empregado.hpp"

class Gerente : public Empregado
{
protected:
    int bonus;

public:
    Gerente(string nome, string cpf, int bonus);
    ~Gerente();

    void mostraDados();
    float calculaSalario(float horasTrabalhadas);
};