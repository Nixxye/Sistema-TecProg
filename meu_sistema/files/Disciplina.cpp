#include "../headers/Disciplina.h"
#include "../headers/Departamento.h"


Disciplina::Disciplina(int na, std::string ac)
{
    departamento = NULL;
    area_conhecimento = ac;
}
Disciplina::~Disciplina()
{
    departamento = NULL;
}

void Disciplina::set_id(int i)
{
    id = i;
}
int Disciplina::get_id()
{
    return id;
}

void Disciplina::set_nome(std::string n)
{
    nome = n;
}
std::string Disciplina::get_nome()
{
    return nome;
}

void Disciplina::set_departamento(Departamento *dp)
{
    departamento = dp;
    dp->inclua_disciplina(this);
}

Departamento *Disciplina::get_departamento()
{

    return departamento;
}
void Disciplina::inclua_aluno(Aluno * al)
{
    lista.inclua_aluno(al);
}

void Disciplina::liste_alunos()
{
    lista.liste_alunos();
}

void Disciplina::liste_alunos2()
{
    lista.liste_alunos2();
}
