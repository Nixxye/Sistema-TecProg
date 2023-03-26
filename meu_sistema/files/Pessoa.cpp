#include "../headers/Pessoa.h"

Pessoa::Pessoa(const char nome[], int dia, int mes, int ano):
dia{dia}, mes{mes}, ano{ano}
{
    this->nome = (char *) malloc(sizeof(char) * (strlen(nome) + 1));
    strcpy(this->nome, nome);
    calc_idade();
}

Pessoa::~Pessoa()
{
    free(nome);
}

void Pessoa::calc_idade()
{
    idade = 2023 - ano;
    if (mes > 3 || (mes == 3 && dia > 26))
        idade--;
}

void Pessoa::print()
{
    std::cout << nome << " tem " << idade << " anos" << std::endl;
}

int Pessoa::get_idade()
{
    return idade;
}