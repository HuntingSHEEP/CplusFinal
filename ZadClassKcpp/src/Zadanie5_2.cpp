//
// Created by andrzej on 08.06.2021.
//
#include "../include/Zadania.h"
#include <iostream>
using namespace std;

struct szafa{
    string rodzaj;
    string material;
    int wysokosc;
    int szerokosc;
};

void Zadania::zad5_2() {
    std::cout<<"Zadanie 5.2"<<std::endl;
    cout<<"Zadanie 5.2\n"
          "--------------------------------------\n"
          "Stwórz plik z działająca strukturą:\n"
          "- deklaracja,\n"
          "- definicja obiektów (w dowolny sposób):\n"
          "  - wywołanie,\n"
          "  - zmiana wartości,\n"
          "  - odczyt wartości,\n"
          "  // - czy można stworzyć konstruktor (inicjalizacja wartości poczatkowych - standard, lista inicjalizacyjna)\n"
          "- nazwij program: ZadStruct.cc"<<endl;

    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

    szafa regal = {"wisząca", "sosna", 200, 60};
    cout<<regal.rodzaj<<endl;
    regal.rodzaj = "stojąca";
    cout<<regal.rodzaj<<endl;

}