#pragma once

#include "Pessoa.h"
#include <time.h>

class Principal
{
private:
    Pessoa jean;
    int dia_atual;
    int mes_atual;
    int ano_atual;
public:
    Principal();
    ~Principal();
    void executar();
};