#pragma once

#include <string>

class Departamento;

class Disciplina 
{
private:
    int id;
    std::string nome;
    std::string area_conhecimento;

    Departamento* departamento;
public:
    Disciplina(int i, int na, std::string ac);
    Disciplina();
    ~Disciplina();
   
    Disciplina* p_prox;

    void set_id(int i);
    int get_id();

    void set_nome(std::string n);
    std::string get_nome();

    void set_departamento(Departamento* dp);
    Departamento* get_departamento();
};