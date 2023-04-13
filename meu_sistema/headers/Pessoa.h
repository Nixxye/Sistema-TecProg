#pragma once

#include <iostream>
#include <string.h>


class Pessoa
{
protected:
    int dia;
    int mes;
    int ano;
    int idade;
    std::string nome;

public:
    Pessoa(std::string n = "", int dia = 0, int mes = 0, int ano = 0, int dia_atual = 0, int mes_atual = 0, int ano_atual = 2023);
    ~Pessoa();

    void inicializa(std::string n = "", int dia = 0, int mes = 0, int ano = 0, int dia_atual = 0, int mes_atual = 0, int ano_atual = 2023);
    void calc_idade(int dia_atual, int mes_atual, int ano_atual);
    void print();
    int get_idade();

    void set_nome(std::string n);
    std::string get_nome();
};