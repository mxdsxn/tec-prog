#pragma once
#include <string>

using namespace std;

class Item
{
private:
 string nome;
 int valorUnitario, quantidade;

public:
 Item(string nome, int valorUnitario, int quantidade);
 ~Item();

 string getNome();
 int getValorTotal();
};