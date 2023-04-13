#include "../headers/Professor.h"

Professor::Professor(int diaNa, int mesNa, int anoNa, std::string n)
{
    nome = n;
}

Professor::~Professor()
{

}
void Professor::set_universidade(Universidade *universidade)
{
    p_universidade = universidade;
}

void Professor::onde_trabalho()
{
    std::cout << nome << " trabalha em " << p_universidade->get_nome() << std::endl;
}
void Professor::set_departamento(Departamento *departamento)
{
    p_departamento = departamento;
}

void Professor::qual_departamento()
{
    std::cout << nome <<" trabalha no departamento "<<p_departamento->get_nome()<<std::endl;
}