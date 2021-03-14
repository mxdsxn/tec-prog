#include <iostream>
#include "./string.hpp"

using namespace std;

int main()
{
 char nameString[100] = "";

 cout << "Escrava seu nome completo:" << endl;
 cin.get(nameString, 100);

 String name = nameString;

 cout << name.abreviar() << endl;

 return 0;
}