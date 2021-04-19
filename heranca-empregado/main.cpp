#include <iostream>
#include "./faxineiro.hpp"
#include "./gerente.hpp"

using namespace std;

int main()
{
    int menuOp;
    string nome, cpf;
    int bonus;
    float horasTrabalhas;

    cout << "1 - Gerente" << endl;
    cout << "2 - Faxineiro" << endl;
    cin >> menuOp;

    switch (menuOp)
    {
    case 1:
    {
        cout << "Insira nome: " << endl;
        cin >> nome;

        cout << endl;

        cout << "Insira cpf: " << endl;
        cin >> cpf;

        cout << endl;

        cout << "Insira bonus: " << endl;
        cin >> bonus;

        Gerente *gerente = new Gerente(nome, cpf, bonus);

        cout << "Insira horas trabalhas: " << endl;
        cin >> horasTrabalhas;

        gerente->mostraDados();
        cout << "Salario: " << gerente->calculaSalario(horasTrabalhas)
             << endl;
    }
    break;

    case 2:
    {
        cout << "Insira nome: " << endl;
        cin >> nome;

        cout << endl;

        cout << "Insira cpf: " << endl;
        cin >> cpf;

        Faxineiro *faxineiro = new Faxineiro(nome, cpf);

        cout << "Insira horas trabalhas: " << endl;
        cin >> horasTrabalhas;

        faxineiro->mostraDados();
        cout << "Salario: " << faxineiro->calculaSalario(horasTrabalhas)
             << endl;
    }
    break;
    }

    return 0;
}