#include "Principal.h"

Principal::Principal()
//(int dia, int mes, int ano)
{
    //diaAtual  = dia;     mesAtual  = mes;     anoAtual  = ano;

    time_t now = time(0);
    tm *ltm = localtime(&now);
    //SYSTEMTIME st;
    //GetSystemTime(&st);
    //printf("Year:%d\nMonth:%d\nDate:%d\nHour:%d\nMin:%d\nSecond:% d\n" ,st.wYear,st.wMonth,st.wDay,st.wHour,st.wMinute,st.wSecond);

    diaAtual = ltm->tm_mday;
	mesAtual = ltm->tm_mon;
	anoAtual = ltm->tm_year;

    // Inicializa��o do(s) ojeto(s) da classe Pessoa
	Simao.Inicializa(3, 10, 1976, "Jean Sim�o");
    Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
    Newton.Inicializa(4, 1, 1643, "Isaac Newton");

    // Registro do(s) nome(s) da(s) universidade(s)
    UTFPR.setNome("Universidade Tecnologica Federal do Paran�");
    Princeton.setNome("University of Princeton");
    Cambridge.setNome("University of Cambridge");

    // Registro do(s) nome(s) do(s) departamento(s)
    ModaUFTPR.setNome("Moda");
	TecnologiaUTFPR.setNome("Tecnologia da UTFPR");
	EletronicaUFTPR.setNome("Eletronica da UTFPR");
    FisicaPrinceton.setNome("Fisica de Princenton");
    MatematicaCambridge.setNome("Matematica de Cambridge");

    // "Agrega��o" do(s) Departamento(s) a(s) Univesidade(s).
    UTFPR.setDepartamento(&EletronicaUFTPR, 0);
	UTFPR.setDepartamento(&EletronicaUFTPR, 1);
	UTFPR.setDepartamento(&EletronicaUFTPR, 2);
    Princeton.setDepartamento(&FisicaPrinceton, 0);
    Cambridge.setDepartamento(&MatematicaCambridge, 0);

	//Executar();

}

void Principal::Executar()
{
    // C�lculo da idade.
	Simao.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Einstein.Calc_Idade(diaAtual, mesAtual, anoAtual);
    Newton.Calc_Idade(diaAtual, mesAtual, anoAtual);

    printf("\n");

    // "Filia��o" a universidade.
    Simao.setUnivFiliado(&UTFPR);
    Einstein.setUnivFiliado(&Princeton);
    Newton.setUnivFiliado(&Cambridge);

    printf("\n");

    // "Filia��o" ao departamento.
	Simao.setDepartamento(&EletronicaUFTPR);
    Einstein.setDepartamento(&FisicaPrinceton);
    Newton.setDepartamento(&MatematicaCambridge);

    printf("\n");

    // Universidade que a Pessoa trabalha.
   
	Simao.OndeTrabalho();
    Einstein.OndeTrabalho();
    Newton.OndeTrabalho();

    printf("\n");

    // Departamento que a Pessoa trabalha.
    Simao.QualDepartamentoTrabalho();
    Einstein.QualDepartamentoTrabalho();
    Newton.QualDepartamentoTrabalho();
}