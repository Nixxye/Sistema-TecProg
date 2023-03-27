#pragma once

#include <string.h>

class Universidade
{
private:
    char *nome;
public:  
    Universidade(const char n[] = "");
    ~Universidade();
    void set_nome(const char n[] = "");
    char* get_nome();
};