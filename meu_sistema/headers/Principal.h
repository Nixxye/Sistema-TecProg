#pragma once

#include "../headers/Professor.h"
#include <time.h>

class Principal
{
private:
    Professor jean;
    Universidade UTFPR;
    Departamento DAINF;

    int dia_atual;
    int mes_atual;
    int ano_atual;
public:
    Principal();
    ~Principal();
    void executar();
};