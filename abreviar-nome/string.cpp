
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "./string.hpp"

using namespace std;

String::String() {}

String::String(char *newInfo)
{
 this->info = newInfo;
}

String::~String()
{
 // delete this->info;
}

void String::operator=(char *newInfo)
{
 this->info = newInfo;
}

void String::operator=(String newInfo)
{
 this->info = newInfo.info;
}

char *String::operator+(String rightLeft)
{
 int stringLength = strlen(this->info) + strlen(rightLeft.info);

 char *result = (char *)(malloc(sizeof(char) * stringLength));

 strcat(result, this->info);
 strcat(result, rightLeft.info);

 return result;
}

char *String::abreviar()
{
 char *result = (char *)(malloc(sizeof(char) * strlen(this->info)));
 // char result[strlen(this->info)];

 int firstLetterWord = 0;
 bool firstLetterSetted = false;

 for (int i = 0; i < strlen(this->info); i++)
 {
  // se nao conhece a primeira letra de uma palavra && se o caracter letra maiuscula ou minuscula...
  if (!firstLetterSetted && ((int(this->info[i]) >= 61 && int(this->info[i]) <= 90) ||
                             (int(this->info[i]) >= 97 && int(this->info[i]) <= 122)))
  {
   firstLetterWord = i;
   firstLetterSetted = true;
  }
  // se conhece a primeira letra de uma palavra && se o caracter diferente de letra maiuscula ou minuscula || fim do array...
  else if (firstLetterSetted && (int(this->info[i]) < 61 || (int(this->info[i]) > 90 && int(this->info[i]) < 97) || int(this->info[i]) > 122) || (strlen(this->info) - 1 == i))
  {
   firstLetterSetted = false;

   if (i - firstLetterWord <= 2)
   {
    char word[3] = "";
    word[0] = (this->info[firstLetterWord]);
    word[1] = (this->info[firstLetterWord + 1]);
    word[2] = *" ";

    strcat(result, word);
   }
   else
   {
    char letter[3] = "";
    letter[0] = (this->info[firstLetterWord]);
    letter[1] = *(".");
    letter[2] = *(" ");

    strcat(result, letter);
   }
  }
 }
 return result;
}