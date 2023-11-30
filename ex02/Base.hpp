#pragma once
#include <iostream>
#include <cstdlib>
# define RED "\033[31m"
# define GREEN "\033[92m"
# define RESET "\033[0m"
# define CYAN "\033[96m"
class Base
{
    public:
        virtual ~Base();
};

class A: public Base {};

class B: public Base {};

class C: public Base {};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);