#include "../headers/ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas(int nd, std::string n)
{
    numero_disciplinas = nd;
    nome = n;

    primeira_disciplina = NULL;
    atual_disciplina = NULL;
}
ListaDisciplinas::~ListaDisciplinas()
{
    ELDisciplina* aux = NULL;
    for (aux = primeira_disciplina, primeira_disciplina = primeira_disciplina->p_prox; aux != NULL; primeira_disciplina = primeira_disciplina->p_prox)
    {
        delete aux;
        aux = primeira_disciplina;
    }
    primeira_disciplina = NULL;
    atual_disciplina = NULL;

}

void ListaDisciplinas::set_nome(std::string n)
{
    nome = n;
}

void ListaDisciplinas::inclua_disciplina(Disciplina *pdi)
{
    if (((cont_disciplinas < numero_disciplinas) && (pdi != NULL)) || (numero_disciplinas == -1) && (pdi != NULL))
    {
        ELDisciplina *aux = new ELDisciplina();
        aux->set_disciplina(pdi);

        if (primeira_disciplina == NULL)
        {
            primeira_disciplina = aux;
            atual_disciplina = aux;
        }
        else
        {
            atual_disciplina->p_prox = aux;
            aux->p_ant = atual_disciplina;
            atual_disciplina = aux;
        }
        cont_disciplinas++;
    } 
    else
    {
        std::cout<<"Disciplina nao incluida "<<"Quantia de disciplinas já lotada em "<<numero_disciplinas<<"discplinas."<<std::endl;
    }
}

void ListaDisciplinas::liste_disciplinas()
{
    ELDisciplina *aux = primeira_disciplina;
    while(aux != NULL)
    {
        std::cout<<"Disciplina"<<aux->get_nome()<<" do departamento "<<nome<<"."<<std::endl;
        aux = aux->p_prox;
    }
}
