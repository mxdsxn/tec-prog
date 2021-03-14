#include <iostream>

#pragma once

class String
{
private:
public:
 char *info;
 String();
 String(char *newInfo);
 ~String();

 void operator=(char *newInfo);
 void operator=(String newInfo);
 char *operator+(String rightLeft);
 void abreviar();
};
