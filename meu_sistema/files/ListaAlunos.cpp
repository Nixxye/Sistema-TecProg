#include "../headers/ListaAlunos.h"

ListaAlunos::ListaAlunos(int na, std::string n)
{
    primeiro_aluno = NULL;
    aluno_atual = NULL;

    cont_alunos = 0;
    numero_alunos = na;

    nome = n;
}

ListaAlunos::~ListaAlunos()
{
    ELAluno *aux;
    for (aux = primeiro_aluno, primeiro_aluno = primeiro_aluno->p_prox; primeiro_aluno != NULL; primeiro_aluno = primeiro_aluno->p_prox)
    {
        delete aux;
        aux = primeiro_aluno;
    }
    primeiro_aluno = NULL;
    aluno_atual = NULL;   
}

void ListaAlunos::inclua_aluno(Aluno *al)
{
    ELAluno *aux = new ELAluno();
    aux->set_aluno(al);
    if ( ( cont_alunos < numero_alunos ) && ( al != NULL ) )
    {
        if ( primeiro_aluno == NULL )
        {
            primeiro_aluno = aux;
            aluno_atual = aux;
        }
        else
        {
            aluno_atual->p_prox = aux;
            aux->p_ant = aluno_atual;
            aluno_atual = aux;
        }
        cont_alunos++;
    }
    else
    {
        if (al != NULL)
        {
            std::cout<<"Aluno não incluído. Turma já lotada em "<<numero_alunos<<" alunos"<<std::endl;
        }
        else
        {
            std::cout<<"Ponteiro do Aluno está nulo!"<<std::endl;
        }
        
    }
}

void ListaAlunos::liste_alunos()
{
    ELAluno *aux = NULL;
    for (aux = primeiro_aluno; aux != NULL; aux = aux->p_prox)
    {
        std::cout<<"Aluno "<<aux->get_nome()<<" matriculado na Disciplina "<<nome<<"."<<std::endl;
    }

}

void ListaAlunos::liste_alunos2()
{
    ELAluno *aux = NULL;
    for (aux = aluno_atual; aux != NULL; aux = aux->p_ant)
    {
        std::cout<<"Aluno "<<aux->get_nome()<<" matriculado na Disciplina "<<nome<<"."<<std::endl;
    }
}
