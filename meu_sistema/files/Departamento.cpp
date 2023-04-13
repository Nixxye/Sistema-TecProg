#include "../headers/Departamento.h"
#include "../headers/Universidade.h"


Departamento::Departamento(std::string n, int i)
{
    nome = n;
    id = i;
    primeira_disciplina = NULL;
    atual_disciplina = NULL;
}
Departamento::~Departamento()
{
    primeira_disciplina = NULL;
    atual_disciplina = NULL;
}

void Departamento::set_nome(std::string n)
{
    nome = n;
}
std::string Departamento::get_nome()
{
    return nome;
}

void Departamento::inclua_disciplina(Disciplina *dp)
{
    if (primeira_disciplina == NULL)
    {
        primeira_disciplina = dp;
        atual_disciplina = dp;
    }
    else
    {
        dp->p_ant = atual_disciplina;
        atual_disciplina->p_prox = dp;
        atual_disciplina = dp;
    }
}
void Departamento::liste_disciplinas()
{
    Disciplina* aux;
    aux = primeira_disciplina;
    while(aux != NULL)
    {
        std::cout<<"A disciplina "<<aux->get_nome()<<" pertence ao Departamento "<<nome<<std::endl;
        aux = aux->p_prox;
    }

}
int Departamento::get_id()
{
    return id;
}
