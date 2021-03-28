#include "./carro.hpp"

int main()
{
 Carro *uno = new Carro(14.5, 50);

 uno->abastecer(40);
 uno->andar(14.5);
 uno->abastecer(301);
 uno->andar(145);
 uno->andar(1999);

 return 1;
}