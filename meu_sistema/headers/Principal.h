#pragma once

#include "Pessoa.h"
#include "Universidade.h"
#include <time.h>

class Principal
{
private:
    Pessoa jean;
    Universidade UTFPR;
    int dia_atual;
    int mes_atual;
    int ano_atual;
public:
    Principal();
    ~Principal();
    void executar();
};