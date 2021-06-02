//
// Created by andrzej on 02.06.2021.
//
#include <iostream>
#include "../include/Zadania.h"
using namespace std;

void fun1(int a){
    cout<<"FUNKCJA1"<<endl;
    if(a%2 == 1){
        cout<<"jest Nieparzysta"<<endl;
    }else{
        cout<<"Parzysta"<<endl;
    }
}

void fun2(int a){
    cout<<"FUNKCJA2"<<endl;
    const char* b = (a%2 == 0) ? "Parzysta" : "Nieparzysta";
    cout<< ((a%2 == 0) ? "Parzysta" : "Nieparzysta") <<endl;
}

void bitowo(int q){
    unsigned char a = q, b = 1;

    // The result is 00000001
    printf("a = %d, b = %d\n", a, b);

    if((a&b) == 0)
        cout<<"Parzyste"<<endl;
    else if((a&b) == 1)
        cout<<"Nieparzyste"<<endl;


}

void Zadania::zad4_3() {
    std::cout<<"Zadanie 4.3"<<std::endl;
    cout<<"--------------------------------------\n"
          "Napisz program sprawdzający czy liczba jest parzysta/nieparzysta:\n"
          "- trzy funkcje:\n"
          "  (a) w jednej sprawdzamy z wykorzystaniem operacji bitowych (&);\n"
          "  (b) w drugiej inaczej (eg. modulo)\n"
          "  (c) w trzeciej sprawdzenie z użyciem operatora warunkowego zamiast if (lub jako warunek w if: TRUE || FALSE; (... ? 0 : 1))\n"
          "  - w kodzie funkcji (a) proszę rozpisać jako komentarz przykładowe sprawdzenie\n"
          "- nazwać program: ZadParzysta.cc"<<endl;

    int a;
    cout<<"Podaj liczbe"<<endl;
    scanf(" %d", &a);

    int f;
    cout<<"wybierz funkcję [0|1|2]"<<endl;
    scanf(" %d", &f);

    switch (f){
        case 0:
            fun1(a);
            break;
        case 1:
            fun2(a);
            break;
        case 2:
            bitowo(a);
    }


}

