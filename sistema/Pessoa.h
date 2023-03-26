#pragma once

#include <iostream>
#include <string.h>

class Pessoa
{
protected:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[30];  
	int id;
	
public:
    Pessoa(int diaNa, int mesNa, int anoNa, char* nome = "");
    Pessoa();
    void Inicializa(int diaNa, int mesNa, int anoNa, char* nome = "");
    void Calc_Idade(int diaAT, int mesAT, int anoAT);
    int  informaIdade();
	void setId(int i) { id = i; } 
	int getId() { return id; }
    
};