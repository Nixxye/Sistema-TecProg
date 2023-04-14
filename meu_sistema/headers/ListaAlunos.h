#pragma once

#include "../headers/Aluno.h"
#include "../headers/ELAluno.h"

class ListaAlunos
{
private:
    
    int numero_alunos;
    int cont_alunos;

    ELAluno *primeiro_aluno;
    ELAluno *aluno_atual;

    std::string nome;
public:
    ListaAlunos(int na = 0, std::string n = "");
    ~ListaAlunos();

    void inclua_aluno(Aluno* al);
    void liste_alunos();
    void liste_alunos2();

};