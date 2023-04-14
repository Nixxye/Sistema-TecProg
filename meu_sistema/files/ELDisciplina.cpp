#include "../headers/ELDisciplina.h"

ELDisciplina::ELDisciplina()
{
    p_ant = NULL;
    p_prox = NULL;
}
ELDisciplina::~ELDisciplina()
{
    p_ant = NULL;
    p_prox = NULL;
}

void ELDisciplina::set_disciplina(Disciplina *pdi)
{
    disciplina = pdi;
}

Disciplina *ELDisciplina::get_disciplina()
{
    return disciplina;
}

std::string ELDisciplina::get_nome()
{
    return disciplina->get_nome();
}
