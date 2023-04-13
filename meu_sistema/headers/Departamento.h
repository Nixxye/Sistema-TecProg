#pragma once

#include <iostream>
#include <string.h>
#include "../headers/Disciplina.h"

class Universidade;

class Departamento
{
private:
    std::string nome;
    int id;
    Disciplina* primeira_disciplina;
    Disciplina* atual_disciplina;
public:
    Departamento(std::string n = "", int i = 0);
    ~Departamento();
    
    void set_nome(std::string n);
    std::string get_nome();

    void inclua_disciplina(Disciplina* dp);
    void liste_disciplinas();

    int get_id();
};