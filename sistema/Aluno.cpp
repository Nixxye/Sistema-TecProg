#include "Aluno.h"

Aluno::Aluno (int diaNa, int mesNa, int anoNa, char* nome):
Pessoa (diaNa, mesNa, anoNa, nome)
{

}

Aluno::Aluno(int i):
Pessoa()
{
	id = i;
	RA = 0;
}

Aluno::Aluno ( ):
Pessoa()
{

}

Aluno::~Aluno()
{

}

void Aluno::setRA(int ra)
{ 
	RA = ra;
}
 
int Aluno::getRA()
{
	return RA;
}


