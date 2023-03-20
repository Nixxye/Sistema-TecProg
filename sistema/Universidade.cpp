#include "stdafx.h"
#include "Universidade.h"

Universidade::Universidade()
{
    //Dpto.setNome("Teste");
}

Universidade::~Universidade()
{
}

char* Universidade::getNome()
{
   return nome;
}

void Universidade::setNome(char* n)
{
   strcpy(nome, n);
}

void Universidade::setDepartamento(Departamento* dep, int ctd)
{
   //Dptos[ctd] = dep;
	Dptos.push_back(dep);
}
