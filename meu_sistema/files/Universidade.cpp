#include "../headers/Universidade.h"

Universidade::Universidade(const char n[])
{
    strcpy(nome, n);
}
Universidade::~Universidade()
{

}
void Universidade::set_nome(const char n[])
{
    strcpy(nome, n);
}
char * Universidade::get_nome()
{
    return nome;
}