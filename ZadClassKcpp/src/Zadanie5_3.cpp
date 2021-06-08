//
// Created by andrzej on 08.06.2021.
//

#include "../include/Zadania.h"
#include <iostream>
using namespace std;

//#########################################################################

union stat{
    char student;
    int index;
    double srednia;
};


void Zadania::zad5_3() {
    std::cout<<"Zadanie 5.3"<<std::endl;
    cout<<"Zadanie 5.3\n"
          "--------------------------------------\n"
          "Pokaż działanie uni (niebezpieczenstwa, bledy)\n"
          "- nazwij program: ZadUnia.cc"<<endl;

    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

    //status NWM = {"Kowalski", 2135, 4.5}; error: too many initializers
    stat imie;

    imie.student = 'c';
    cout <<"student:"<< imie.student <<"; index:"<< imie.index <<"; srednia:"<< imie.srednia << endl;
    imie.index = 53124;
    cout <<"student:"<< imie.student <<"; index:"<< imie.index <<"; srednia:"<< imie.srednia << endl;
    imie.srednia = 6.0;
    cout <<"student:"<< imie.student <<"; index:"<< imie.index <<"; srednia:"<< imie.srednia << endl;



}