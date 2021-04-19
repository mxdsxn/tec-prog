#include <iostream>
#include "./faxineiro.hpp"

using namespace std;

Faxineiro::Faxineiro(string nome, string cpf) : Empregado(nome, cpf, "Faxineiro") {}
Faxineiro::~Faxineiro() {}

void Faxineiro::mostraDados()
{
    cout << "Nome do " << this->cargo << ": " << this->nome << endl
         << "Cpf: " << this->cpf << endl;
}

float Faxineiro::calculaSalario(float horasTrabalhadas)
{
    if (this)
    {
        float horasExtras = horasTrabalhadas > 176
                                ? horasTrabalhadas - 176
                                : 0;

        float horasSemExtra = horasExtras > 0
                                  ? horasTrabalhadas - horasExtras
                                  : horasTrabalhadas;

        return (horasSemExtra * 4.5) + (horasExtras * 6);
    }
    return 0;
}