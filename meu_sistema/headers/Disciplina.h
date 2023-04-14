#pragma once

#include <string>
#include "../headers/ListaAlunos.h"

class Departamento;

class Disciplina 
{
private:
    int id;
    std::string nome;
    std::string area_conhecimento;

    Departamento* departamento;

    ListaAlunos lista;
public:
    Disciplina(int na = 45, std::string ac = "");
    ~Disciplina();

    void set_id(int i);
    int get_id();

    void set_nome(std::string n);
    std::string get_nome();

    void set_departamento(Departamento* dp);
    Departamento* get_departamento();

    void inclua_aluno(Aluno* al);
    void liste_alunos();
    void liste_alunos2();
};