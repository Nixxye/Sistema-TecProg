#pragma once

#include "../headers/Universidade.h"
#include "../headers/Pessoa.h"
#include "../headers/Departamento.h"

class Professor: public Pessoa
{
private:
    Universidade *p_universidade;
    Departamento *p_departamento;
public:
    Professor(int diaNa = 0, int mesNa = 0, int anoNa = 0, std::string n = "");
    ~Professor();

    void set_universidade(Universidade *universidade);
    void onde_trabalho();

    void set_departamento(Departamento *departamento);
    void qual_departamento();
};