#include <iostream>
#include "./gerente.hpp"

using namespace std;

Gerente::Gerente(string nome, string cpf, int bonus) : Empregado(nome, cpf, "Gerente")
{
    this->bonus = bonus;
}
Gerente::~Gerente() {}

void Gerente::mostraDados()
{
    cout << "Nome do " << this->cargo << ": " << this->nome << endl
         << "Cpf: " << this->cpf << endl
         << "Bonus: " << this->bonus << endl;
}

float Gerente::calculaSalario(float horasTrabalhadas)
{
    if (this)
    {
        float horasExtras = horasTrabalhadas > 176
                                ? horasTrabalhadas - 176
                                : 0;

        float horasSemExtra = horasExtras > 0
                                  ? horasTrabalhadas - horasExtras
                                  : horasTrabalhadas;

        return (horasSemExtra * 30) + this->bonus;
    }
    return 0;
}