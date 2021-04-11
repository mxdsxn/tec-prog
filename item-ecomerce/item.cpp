#include "./item.hpp"

Item::Item(string nome, int valorUnitario, int quantidade)
{
  this->nome = nome;
  this->valorUnitario = valorUnitario;
  this->quantidade = quantidade;
}

Item::~Item() {}

string Item::getNome()
{
  if (this)
  {
    return this->nome;
  }
  return nullptr;
}

int Item::getValorTotal()
{
  if (this)
  {
    return this->quantidade * this->valorUnitario;
  }
  return 0;
}