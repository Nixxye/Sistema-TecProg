#pragma once

#include <iostream>
#include <string.h>

class Departamento
{
private:
    char *nome;
public:
    Departamento(const char n[] = "");
    ~Departamento();
    void set_nome(const char n[]);
    char * get_nome();
};