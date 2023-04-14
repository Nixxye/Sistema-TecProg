#pragma once
#include "../headers/Aluno.h"

class ELAluno
{
private:
    Aluno* aluno;
public:
    ELAluno();
    ~ELAluno();

    ELAluno* p_prox;
    ELAluno* p_ant;

    void set_aluno(Aluno* pa);
    Aluno* get_aluno();

    std::string get_nome();
};