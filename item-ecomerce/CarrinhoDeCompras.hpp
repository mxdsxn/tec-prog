#pragma once
#include <vector>
#include "./item.hpp"

using namespace std;

class CarrinhoDeCompra
{
private:
  vector<Item *> listaCompra;

public:
  CarrinhoDeCompra();
  ~CarrinhoDeCompra();
  bool adicionarItem(Item *item);
  bool removerItem(Item *item);
  int getValorTotal();
  void total();
};