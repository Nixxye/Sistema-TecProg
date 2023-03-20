#pragma once 

#include "Departamento.h"
#include <list> 
using namespace std;

class Universidade
{
  private:
      char nome[130];
      
	  list < Departamento* > Dptos;
	  int ctd;

  public:
      Universidade();
      ~Universidade();
	  
      void setNome(char* n);
      char* getNome();
      void setDepartamento(Departamento* dep, int ctd);
};
