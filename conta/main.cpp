#include <iostream>

#include "./cliente.hpp"
#include "./conta.hpp"

using namespace std;

int main()
{
 Cliente *cliente = new Cliente("Madson", "78279820");
 Conta *conta1 = new Conta("123");
 Conta *conta2 = new Conta("456");

 cliente->setConta(conta1, 0);
 cliente->setConta(conta2, 1);

 conta1->depositar(1000);
 cliente->aplicarRecursos(20000);
 conta2->sacar(530);

 cliente->gerarRelatorio();

 return 1;
}