#pragma once
#include <string>
#include "./empregado.hpp"

class Faxineiro : public Empregado
{
public:
    Faxineiro(string nome, string cpf);
    ~Faxineiro();

    void mostraDados();
    float calculaSalario(float horasTrabalhadas);
};