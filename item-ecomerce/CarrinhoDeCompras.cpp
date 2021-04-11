#include <iostream>
#include "./CarrinhoDeCompras.hpp"

using namespace std;

CarrinhoDeCompra::CarrinhoDeCompra() {}
CarrinhoDeCompra::~CarrinhoDeCompra() {}

bool CarrinhoDeCompra::adicionarItem(Item *item)
{
	if (this)
	{
		this->listaCompra.push_back(item);
		return true;
	}
	return false;
}

bool CarrinhoDeCompra::removerItem(Item *item)
{
	if (this)
	{
		for (int index = 0; index < this->listaCompra.size(); index++)
		{
			if (this->listaCompra[index] == item)
			{
				this->listaCompra.erase(this->listaCompra.begin() + index);
				break;
			}
		}
		return true;
	}
	return false;
}

int CarrinhoDeCompra::getValorTotal()
{
	int total = 0;
	if (this)
	{
		for (int index = 0; index < this->listaCompra.size(); index++)
		{
			total += this->listaCompra[index]->getValorTotal();
		}
	}
	return total;
}

void CarrinhoDeCompra::total()
{
	if (this)
	{
		for (int i = 0; i < this->listaCompra.size(); i++)
		{
			cout << this->listaCompra[i]->getNome() << " ------- " << this->listaCompra[i]->getValorTotal() << endl;
		}
		cout << "total"
				 << " ------- " << this->getValorTotal() << endl;
	}
}