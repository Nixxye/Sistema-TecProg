#include "../headers/Departamento.h"
#include "../headers/Universidade.h"

Departamento::Departamento(std::string n, int i)
{
    nome = n;
    id = i;
}
Departamento::~Departamento()
{

}

void Departamento::set_nome(std::string n)
{
    nome = n;
}
std::string Departamento::get_nome()
{
    return nome;
}

int Departamento::get_id()
{
    return id;
}
