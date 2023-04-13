#include "../headers/Pessoa.h"

Pessoa::Pessoa(std::string n, int dia, int mes, int ano, int dia_atual, int mes_atual, int ano_atual):
dia{dia}, mes{mes}, ano{ano}
{
    nome = n;
    calc_idade(dia_atual, mes_atual, ano_atual);
}

Pessoa::~Pessoa()
{
    
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

void Pessoa::inicializa(std::string n, int dia, int mes, int ano, int dia_atual, int mes_atual, int ano_atual)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    nome = n;
    calc_idade(dia_atual, mes_atual, ano_atual);
}

void Pessoa::set_nome(std::string n)
{
    nome = n;
}

std::string Pessoa::get_nome()
{
    return nome;
}
