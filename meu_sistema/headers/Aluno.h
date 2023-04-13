#pragma once
#include "../headers/Pessoa.h"

class Aluno: public Pessoa
{
private:
    int RA;
public:
    Aluno(int ra = -1);
    ~Aluno();

    Aluno* p_prox;
    Aluno* p_ant;

    void set_RA(int ra = -1);
    int get_RA();

};