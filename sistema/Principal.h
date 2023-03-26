#pragma once

#include <ctime>
#include "Professor.h"
#include "Universidade.h"

class Principal
{
  private:
	Professor Simao, Einstein, Newton;
    Universidade UTFPR, Princeton, Cambridge;

    Departamento ModaUFTPR, TecnologiaUTFPR, EletronicaUFTPR, FisicaPrinceton, MatematicaCambridge;

    int diaAtual;
	int mesAtual;
	int anoAtual;

  public:
    //Principal(int dia, int mes, int ano);
	Principal();
    void Executar();
};
