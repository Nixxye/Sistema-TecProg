#include "../headers/Universidade.h"

Universidade::Universidade(std::string n)
{
    nome = n;
}
Universidade::~Universidade()
{

}
void Universidade::set_nome(std::string n)
{
    nome = n;
}
std::string Universidade::get_nome()
{
    return nome;
}
void Universidade::set_departamento(Departamento *departamento)
{
    departamentos.push_back(departamento);
}

void Universidade::imprime_departamentos()
{
    std::list<Departamento*>::iterator iterador;
    for (iterador = departamentos.begin(); iterador != departamentos.end(); iterador++)
    {
        std::cout<<(*iterador)->get_nome() <<std::endl;
    }
}
