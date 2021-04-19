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

    cout << "1 - Gerente" << end;
    cout << "2 - Faxineiro" << end;

    if(menuOp == 1)
    {
        cout << "Insira nome: " << endl;
        getline(cin, nome);
        
        cout << endl;

        cout << "Insira cpf: " << endl;
        getline(cin, cpf);
        
        cout << endl;

        cout << "Insira bonus: " << endl;
        cin >> bonus;

        Gerente *gerente = new Gerente(nome, cpf, bonus);

        cout << "Insira horas trabalhas: " << endl;
        cin >> horasTrabalhas;

        gerente->mostraDados();
        cout << "Salario: "<< gerente->calculaSalario(horasTrabalhas)
             << endl;
    } else if( menuOp == 20)
    {
        cout << "Insira nome: " << endl;
        getline(cin, nome);
        
        cout << endl;

        cout << "Insira cpf: " << endl;
        getline(cin, cpf);
        
        Gerente *faxineiro = new Faxineiro(nome, cpf);

        cout << "Insira horas trabalhas: " << endl;
        cin >> horasTrabalhas;

        faxineiro->mostraDados();
        cout << "Salario: "<< faxineiro->calculaSalario(horasTrabalhas)
             << endl;
    }

    return 0;
}