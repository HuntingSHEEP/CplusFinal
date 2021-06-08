//
// Created by andrzej on 02.06.2021.
//
#include <iostream>
#include "../include/Zadania.h"
using namespace std;

#define PI 3
#define mul(a, b) (a*b)
#define sklejam(Q, W) (Q # W);


void Zadania::zad4_7() {
    std::cout<<"Zadanie 4.7"<<std::endl;
    cout<<"--------------------------------------\n"
          "Napisz program pokazujący zastosowanie dyrektywy preprocesora:\n"
          "  '#ifdef' (#else)\n"
          "  '#ifndef'\n"
          "oraz\n"
          "  '#define':\n"
          "  (a) użycie makra\n"
          "  (b) uzycie '#' i '##'\n"
          "  (a) i (b) stwórz także dla porównania bez dyrektywy preprocesora\n"
          "- nazwać program: ZadPreprocesor.cc"<<endl;

    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    cout<<PI<<endl;
    cout<<"MUL: "<<mul(2,3)<<"; SKLEJAM: "<< sklejam("Ala", " wraz z kotem.")
    cout<<""<<endl;

    #ifndef PI
        cout<<"większe od 3"<<endl;
    #elif PI == 3
        cout<<"równe 3"<<endl;
    #else
        cout<<"mniejsze od 3"<<endl;
    #endif

}