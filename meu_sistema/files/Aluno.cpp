#include "../headers/Aluno.h"

Aluno::Aluno(int ra)
{
    RA = ra;
}

Aluno::~Aluno()
{

}

void Aluno::set_RA(int ra)
{
    RA = ra;
}

int Aluno::get_RA()
{
    return RA;
}
