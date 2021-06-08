//
// Created by andrzej on 08.06.2021.
//

#include "../include/Zadania.h"
#include <iostream>
using namespace std;

class Drzewo
{
public:
    int iloscLisci;

    Drzewo(int wiek, int iloscLisci){
        this->wiek = wiek;
        this->iloscLisci = iloscLisci;
        wypiszWymaluj();
    }

    void zmienIloscLisci(int liscie);

private:
    int wiek;
    void wypiszWymaluj(){
        cout<<"Stworzono instancję drzewa! Jego wiek: "<<wiek<<", ma dużo liści: "<<iloscLisci<<endl;
    }

protected:
    int mozeKorzenie;
    inline int zmienIloscKorzeni(int korzenie){
        this->mozeKorzenie = korzenie;
    }
};

void Drzewo::zmienIloscLisci(int liscie) {
    this->iloscLisci = liscie;
}

//#########################################################################

void Zadania::zad5_1() {
    std::cout<<"Zadanie 5.1"<<std::endl;
    cout<<"Zadanie 5.1\n"
          "--------------------------------------\n"
          "Napisz prosty program z klasą\n"
          "- metody deklarowane i definiowane w klasie\n"
          "- metody deklarowane w klasie, a definiowane poza klasą\n"
          "- zastosowanie 3 sekcji: public, private, protected\n"
          "- zmienne w każdej z sekcji\n"
          "- funkcje, które mają dostęp do zmiennych z sekcji protected i private\n"
          "- funkcje inline\n"
          "- nazwij program: ZadClass.cc"<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

    Drzewo bez = Drzewo(5, 300);
}