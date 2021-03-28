#pragma once

class Conta
{
private:
 char *numero = "";
 float saldo = 0;

public:
 Conta();
 Conta(char *numero);
 ~Conta();

 void sacar(float valor);
 void depositar(float valor);
 float getSaldo();
 char *getNumero();
};