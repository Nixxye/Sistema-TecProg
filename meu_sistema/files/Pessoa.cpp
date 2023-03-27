#include "../headers/Pessoa.h"

Pessoa::Pessoa(const char nome[], int dia, int mes, int ano, int dia_atual, int mes_atual, int ano_atual):
dia{dia}, mes{mes}, ano{ano}
{
    this->nome = (char *) malloc(sizeof(char) * (strlen(nome) + 1));
    strcpy(this->nome, nome);
    calc_idade(dia_atual, mes_atual, ano_atual);
}

Pessoa::~Pessoa()
{
    free(nome);
}

void Pessoa::calc_idade(int dia_atual, int mes_atual, int ano_atual)
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

void Pessoa::inicializa(const char nome[], int dia, int mes, int ano, int dia_atual, int mes_atual, int ano_atual)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    this->nome = (char *) malloc(sizeof(char) * (strlen(nome) + 1));
    strcpy(this->nome, nome);
    calc_idade(dia_atual, mes_atual, ano_atual);
}

void Pessoa::set_universidade(Universidade *universidade)
{
    p_universidade = universidade;
}