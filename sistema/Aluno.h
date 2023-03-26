#pragma once

#include "Departamento.h"
#include "Pessoa.h"

class Aluno : public Pessoa
{ 
 private:
    int				id;
    int				RA;
    //char			nome[150];
    Departamento*	DeptoAssociado;

public:
	Aluno (int diaNa, int mesNa, int anoNa, char* nome = "");
    Aluno ( int i );
	Aluno ( );
    ~Aluno	( );

    void setRA(int ra);
    int getRA();

};