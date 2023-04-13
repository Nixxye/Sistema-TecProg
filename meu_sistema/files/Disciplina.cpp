#include "../headers/Disciplina.h"
#include "../headers/Departamento.h"


Disciplina::Disciplina(int na, std::string ac)
{
    departamento = NULL;
    p_prox = NULL;
    primeiro_aluno = NULL;
    aluno_atual = NULL;
    p_ant = NULL;
    cont_alunos = 0;
    numero_alunos = na;

    area_conhecimento = ac;
}
Disciplina::~Disciplina()
{
    departamento = NULL;
    p_ant = NULL;
    p_prox = NULL;
    primeiro_aluno = NULL;
    aluno_atual = NULL;
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
    if ( ( cont_alunos < numero_alunos ) && ( al != NULL ) )
    {
        if ( primeiro_aluno == NULL )
        {
            primeiro_aluno = al;
            aluno_atual = al;
        }
        else
        {
            aluno_atual->p_prox = al;
            al->p_ant = aluno_atual;
            aluno_atual = al;
        }
        cont_alunos++;
    }
    else
    {
        std::cout<<"Aluno não incluído. Turma já lotada \n";
    }
}

void Disciplina::liste_alunos()
{
    Aluno* aux;
    aux = primeiro_aluno;
    while(aux != NULL)
    {
        std::cout<<"Aluno "<<aux->get_nome()<<" matriculado em "<<nome<<std::endl;
        aux = aux->p_prox;
    }
}

void Disciplina::liste_alunos2()
{
    Aluno* aux;
    aux = aluno_atual;
    while(aux != NULL)
    {
        std::cout<<"Aluno "<<aux->get_nome()<<" matriculado em "<<nome<<std::endl;
        aux = aux->p_ant;
    }
}
