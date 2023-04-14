#pragma once

#include "../headers/Disciplina.h"

class ELDisciplina
{
private:
    Disciplina *disciplina;
public:
    ELDisciplina();
    ~ELDisciplina();

    ELDisciplina *p_prox;
    ELDisciplina *p_ant;

    void set_disciplina(Disciplina* pdi);
    Disciplina* get_disciplina();

    std::string get_nome();
};