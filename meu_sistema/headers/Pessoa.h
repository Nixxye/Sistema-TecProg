#pragma once

#include <iostream>
#include <string.h>
#include "../headers/Universidade.h"

class Pessoa
{
private:
    int dia;
    int mes;
    int ano;
    int idade;
    char *nome;
    Universidade* p_universidade;
public:
    Pessoa(const char nome[] = "", int dia = 0, int mes = 0, int ano = 0, int dia_atual = 0, int mes_atual = 0, int ano_atual = 2023);
    ~Pessoa();
    
    void inicializa(const char nome[] = "", int dia = 0, int mes = 0, int ano = 0, int dia_atual = 0, int mes_atual = 0, int ano_atual = 2023);
    void calc_idade(int dia_atual, int mes_atual, int ano_atual);
    void print();
    int get_idade();

    void set_universidade(Universidade *universidade);
    void onde_trabalho();
};