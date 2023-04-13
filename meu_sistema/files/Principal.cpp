#include "../headers/Principal.h"

Principal::Principal()
{
    struct tm *local;
    time_t segundos;
    time(&segundos);
    local = localtime(&segundos);

    dia_atual = local->tm_mday;
    mes_atual = local->tm_mon + 1;
    ano_atual = local->tm_year + 1900;

    DAINF.set_nome("Computacao");
    jean.inicializa("Jean", 13, 10, 2003, dia_atual, mes_atual, ano_atual);
    UTFPR.set_nome("UTFPR");
    UTFPR.set_departamento (&DAINF);
    jean.set_universidade(&UTFPR);
<<<<<<< Updated upstream

=======
    jean.set_departamento(&DAINF);
    
>>>>>>> Stashed changes
    executar();
}
Principal::~Principal()
{

}

void Principal::executar()
{
    jean.print();
    jean.onde_trabalho();
    jean.qual_departamento();
}