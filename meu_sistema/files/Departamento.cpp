#include "../headers/Departamento.h"

Departamento::Departamento(const char n[])
{
    nome = (char*) malloc(sizeof(char) * (strlen(n) + 1));
    strcpy(nome, n);
}

Departamento::~Departamento()
{
    free(nome);
}

void Departamento::set_nome(const char n[])
{
    strcpy(nome, n);
}
char * Departamento::get_nome()
{
    return nome;
}