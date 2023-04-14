#pragma once

#include <iostream>
#include <string.h>
#include "../headers/ListaDisciplinas.h"

class Universidade;

class Departamento
{
private:
    std::string nome;
    int id;
    Universidade *universidade;
    ListaDisciplinas* lista;

public:
    Departamento(std::string n = "", int i = 0);
    ~Departamento();
    
    void set_nome(std::string n);
    std::string get_nome();

    void inclua_disciplina(Disciplina* dp);
    void liste_disciplinas();

    int get_id();
    void set_universidade(Universidade * uni);
    Universidade * get_universidade();
};