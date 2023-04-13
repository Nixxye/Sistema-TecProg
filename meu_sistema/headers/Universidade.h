#pragma once

#include <string.h>
#include "../headers/Departamento.h"
#include <list>
class Universidade
{
private:
    std::string nome;
    //lista encadeada;
    std::list<Departamento*> departamentos;
public:  
    Universidade(std::string n = "");
    ~Universidade();

    void set_nome(std::string n = "");

    std::string get_nome();
    void set_departamento(Departamento *departamento);
    void imprime_departamentos();

};