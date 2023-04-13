#pragma once
#include "../headers/Pessoa.h"

class Aluno: public Pessoa
{
private:
    int RA;
public:
    Aluno(int ra);
    ~Aluno();

    void set_RA(int ra = -1);
    int get_RA();

};