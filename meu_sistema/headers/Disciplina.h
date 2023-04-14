#pragma once

#include <string>
#include "../headers/ELAluno.h"

class Departamento;

class Disciplina 
{
private:
    int id;
    std::string nome;
    std::string area_conhecimento;

    int numero_alunos;
    int cont_alunos;

    ELAluno *primeiro_aluno;
    ELAluno *aluno_atual;

    Departamento* departamento;
public:
    Disciplina(int na = 45, std::string ac = "");
    ~Disciplina();
    
    Disciplina* p_ant;
    Disciplina* p_prox;

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