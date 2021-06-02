//
// Created by andrzej on 02.06.2021.
//

#ifndef CPLUSFINAL_ZADKCPP_H
#define CPLUSFINAL_ZADKCPP_H


#include <iostream>
#include "Zadania.h"

class ZadKcpp {
public:
    Zadania zadania;
    bool endProgram;

    ZadKcpp();

    void start();
    void lifeCycle();
    int mainMenu();
    void wykonajZadanie(int numerZadania);

    bool coDalej();
};


#endif //CPLUSFINAL_ZADKCPP_H
