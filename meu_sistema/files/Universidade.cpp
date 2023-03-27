#include "../headers/Universidade.h"

Universidade::Universidade(const char n[])
{
    nome = (char*) malloc(sizeof(char) * (strlen(n)+1));
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