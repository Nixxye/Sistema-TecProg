#pragma once

#include <iostream>
#include <string.h>

class Pessoa
{
private:
    int dia;
    int mes;
    int ano;
    int idade;
    char *nome;
public:
    Pessoa(const char nome[] = "", int dia = 0, int mes = 0, int ano = 0);
    ~Pessoa();
    void calc_idade();
    void print();
    int get_idade();
};