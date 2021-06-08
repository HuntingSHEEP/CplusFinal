//
// Created by andrzej on 08.06.2021.
//
#include "../include/Zadania.h"
#include <iostream>
using namespace std;

class Obiekt
{
public:
    int x, y;

    Obiekt(){
        this->x = 0;
        this->y = 0;
    }

    ~Obiekt(){
        cout<<"Zniszczono obiekt"<<endl;
    }

    Obiekt(int X, int Y):
        x(X),
        y(Y)
    {
        //this->x = X;
        //this->y = Y;
    }
};

struct rower{
    string imie;
    string typ;
    double czyWyciagnietyLancuch;
};

void Zadania::zad5_4() {
    std::cout<<"Zadanie 5.4"<<std::endl;
    cout<<"Zadanie 5.4\n"
          "--------------------------------------\n"
          "Stwórz klase (program: ZadKlasaKonstruktor.cc) oraz structure (program: ZadStructKonstruktor.cc) z przykładami konstruktorów i \n"
          "inicializacją zmiennych:\n"
          "- domyślny konstruktor,\n"
          "- domyślny destruktor,\n"
          "- konstruktor z niepustą liczbą zmiennych argumentów\n"
          "- inicjalizacja zmiennych:\n"
          "  - 'standardowa',\n"
          "  - inicjalizacyjna za pomocą listy inicjalizacyjnej"<<endl;

    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    Obiekt obiekt = Obiekt(1,2);
    rower Marysia = {"Marysia", "full TRAIL 150/120", false};
}