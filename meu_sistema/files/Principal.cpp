#include "../headers/Principal.h"

Principal::Principal()
{
    inicializa();
    executar();
}
Principal::~Principal()
{

}

void Principal::inicializa()
{
    inicializa_departamentos();
    inicializa_disciplinas();
    inicializa_professores();
    inicializa_universidades();
}
void Principal::inicializa_universidades()
{
    UTFPR.set_nome("UTFPR");
    UTFPR.set_departamento (&DAINF);
}
void Principal::inicializa_departamentos()
{
    DAINF.set_nome("Computacao");

}
void Principal::inicializa_professores()
{
    struct tm *local;
    time_t segundos;
    time(&segundos);
    local = localtime(&segundos);

    dia_atual = local->tm_mday;
    mes_atual = local->tm_mon + 1;
    ano_atual = local->tm_year + 1900;

    jean.inicializa("Jean", 13, 10, 2003, dia_atual, mes_atual, ano_atual);
    jean.set_universidade(&UTFPR);
    jean.set_departamento(&DAINF);
}
void Principal::inicializa_disciplinas()
{
    Computacao1.set_nome("Computacao I 2006");
    Computacao1.set_departamento(&DAINF);
    Computacao1.inclua_aluno(&AAA);
}
void Principal::inicializa_alunos()
{
}

void Principal::cal_idade_profs()
{
}
void Principal::univ_onde_profs_trabalham()
{
    jean.onde_trabalho();
}
void Principal::dep_onde_profs_trabalham()
{
    jean.qual_departamento();
}
void Principal::liste_disc_deptos()
{
    DAINF.liste_disciplinas();
}
void Principal::liste_depto_por_universidade()
{
    UTFPR.imprime_departamentos();
}
void Principal::liste_alunos_disc()
{
    Computacao1.liste_alunos();
}
void Principal::executar()
{
    univ_onde_profs_trabalham();
    dep_onde_profs_trabalham();
    liste_disc_deptos();
    liste_alunos_disc();


    liste_depto_por_universidade();
}
