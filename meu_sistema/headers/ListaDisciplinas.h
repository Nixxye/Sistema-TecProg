#pragma once

#include "../headers/ELDisciplina.h"

class ListaDisciplinas
{
private:
    int cont_disciplinas;
    int numero_disciplinas;
    std::string nome;

    ELDisciplina* primeira_disciplina;
    ELDisciplina* atual_disciplina;
public:
    ListaDisciplinas(int nd = 1000, std::string n = "");
    ~ListaDisciplinas();

    void set_nome(std::string n);
    void inclua_disciplina(Disciplina* pdi);

    void liste_disciplinas();
};