#include "Departamento.h"

Departamento::Departamento()
{

}

Departamento::~Departamento()
{

}

void Departamento::setNome(char* n)
{
   strcpy(nome, n);
}

char* Departamento::getNome()
{
   return nome;
}




