#include "../headers/ELAluno.h"

ELAluno::ELAluno()
{
    p_ant = NULL;
    p_prox = NULL;
}
ELAluno::~ELAluno()
{
    p_ant = NULL;
    p_prox = NULL;
}
void ELAluno::set_aluno(Aluno* pa)
{
    aluno = pa;
}
Aluno* ELAluno::get_aluno()
{
    return aluno;
}
std::string ELAluno::get_nome()
{
    return aluno->get_nome();
}