#pragma once
#include <string.h>

class Departamento
{
  private:
     char nome[130];

  public:
     Departamento();
     ~Departamento();

     void setNome(char* n);
     char* getNome();
};