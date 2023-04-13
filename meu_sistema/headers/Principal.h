#pragma once

#include "../headers/stdafx.h"
#include <time.h>

class Principal
{
private:
    Professor jean;
    Universidade UTFPR;
    Departamento DAINF;
    Disciplina Computacao1;
    Aluno AAA;
    int dia_atual;
    int mes_atual;
    int ano_atual;
public:
    Principal();
    ~Principal();
    
    void inicializa();
    void inicializa_universidades();
    void inicializa_departamentos();
    void inicializa_professores();
    void inicializa_disciplinas();
    void inicializa_alunos();

    void cal_idade_profs();
    void univ_onde_profs_trabalham();
    void dep_onde_profs_trabalham();
    void liste_disc_deptos();
    void liste_depto_por_universidade();
    void liste_alunos_disc();

    void executar();
};