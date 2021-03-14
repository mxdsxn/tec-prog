#include <iostream>
#include "./string.hpp"

using namespace std;

int main()
{
 char fraseString[100] = "";

 cout << "Escrava uma frase:" << endl;
 cin.get(fraseString, 100);

 String frase = fraseString;

 cout << frase.fraseReversa() << endl;

 return 0;
}