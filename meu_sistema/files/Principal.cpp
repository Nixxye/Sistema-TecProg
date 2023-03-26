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

    jean.inicializa("Jean", 13, 10, 2003, dia_atual, mes_atual, ano_atual);
    executar();
}
Principal::~Principal()
{

}

void Principal::executar()
{
    jean.print();
}