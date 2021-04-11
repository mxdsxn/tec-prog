#include "./CarrinhoDeCompras.hpp"
#include "./item.hpp"
#include <iostream>

using namespace std;

int main()
{
  CarrinhoDeCompra *carrinho = new CarrinhoDeCompra();

  for (int i = 0; i < 10; i++)
  {
    string nome = "item" + to_string(i);
    carrinho->adicionarItem(new Item(nome, (i + 1) * 10 / 3, (i + 1) * 2));
  }

  carrinho->total();
  return 1;
}