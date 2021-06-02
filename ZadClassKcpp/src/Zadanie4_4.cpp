//
// Created by andrzej on 02.06.2021.
//
#include <iostream>
#include "../include/Zadania.h"
using namespace std;

void fun11(int a){
    cout<<"FUNKCJA1"<<endl;
    if(a%2 == 1){
        cout<<"jest Nieparzysta"<<endl;
    }else{
        cout<<"Parzysta"<<endl;
    }
}

void fun21(int a){
    cout<<"FUNKCJA2"<<endl;
    const char* b = (a%2 == 0) ? "Parzysta" : "Nieparzysta";
    cout<< ((a%2 == 0) ? "Parzysta" : "Nieparzysta") <<endl;
}

void bitowo1(int q){
    unsigned char a = q, b = 1;

    // The result is 00000001
    printf("a = %d, b = %d\n", a, b);

    if((a&b) == 0)
        cout<<"Parzyste"<<endl;
    else if((a&b) == 1)
        cout<<"Nieparzyste"<<endl;
}

void Zadania::zad4_4() {
    std::cout<<"Zadanie 4.4"<<std::endl;
    cout<<"--------------------------------------\n"
          "Napisz program z użyciem 'switch' wybierajacy do wykonania jedną z trzech funkcji z zadania ZadParzysta.cc:\n"
          "- nazwać program: ZadParzystaCase.cc (kopia ZadParzyste do ZadParzysteCase+switch, lub pominięcie ZadParzyste i umieszczenie wszystkiego w ZadParzystaCase)"<<endl;

    int a;
    cout<<"Podaj liczbe"<<endl;
    scanf(" %d", &a);

    int f;
    cout<<"wybierz funkcję [0|1|2]"<<endl;
    scanf(" %d", &f);

    switch (f){
        case 0:
            fun11(a);
            break;
        case 1:
            fun21(a);
            break;
        case 2:
            bitowo1(a);
    }
}