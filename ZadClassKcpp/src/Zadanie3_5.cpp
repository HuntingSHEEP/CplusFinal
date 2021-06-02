//
// Created by andrzej on 02.06.2021.
//
#include <iostream>
#include "../include/Zadania.h"
using namespace std;
void operatoryArytmetyczne(){
    int a = 1;
    int b = 2;
    int wynik;

    wynik = a+b;
    wynik = a*a + b*a + 2*b;
    wynik = wynik/2;
    wynik *= 3;
    wynik += 1;
    wynik %= 7;
    wynik /= 2;
}

void operatoryPrzypisania(){
    int a = 1;
    int b = a;
    int tablica[] = {3,1,4,1,5};
    a = tablica[1];
    tablica[a] = b*2;

    (*(tablica+3)) = 7;
}

void Zadania::zad3_5() {
    std::cout<<"Zadanie 3.5"<<std::endl;
    cout<<"-------------------------------------\n"
          "Napisac program z przykladami:\n"
          "(1) operatorow arytmetycznych i (2) operatorow przypisania\n"
          "(1) i (2) jako osobne funkcje: (1) OperatoryArytmetyczne (2) OperatoryPrzypisania\n"
          "- nazwać program: ZadOperatoryPrzypisania.cc"<<endl;

    cout<<"wszystko w kodzie pisze :)"<<endl;

    operatoryArytmetyczne();
    operatoryPrzypisania();
}