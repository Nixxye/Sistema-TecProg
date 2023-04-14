#include "../headers/Departamento.h"
#include "../headers/Universidade.h"



Departamento::Departamento(std::string n, int i)
{
    nome = n;
    id = i;
    lista = new ListaDisciplinas(-1, "");
}
Departamento::~Departamento()
{
    if (lista)
    {
        delete lista;
    }
}

void Departamento::set_nome(std::string n)
{
    nome = n;
    lista->set_nome(n);
}
std::string Departamento::get_nome()
{
    return nome;
}

void Departamento::inclua_disciplina(Disciplina *dp)
{
    lista->inclua_disciplina(dp);
}
void Departamento::liste_disciplinas()
{
    lista->liste_disciplinas();
}
int Departamento::get_id()
{
    return id;
}
void Departamento::set_universidade(Universidade * uni)
{
    universidade = uni;
}

Universidade *Departamento::get_universidade()
{
    return nullptr;
}
