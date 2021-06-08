//
// Created by andrzej on 02.06.2021.
//
#include <iostream>
#include "../include/Zadania.h"
using namespace std;
const int wersja1 = 0;
const int wersja2 = 1;
const int wersja3 = 2;

int getCommandNumber(string slowo){
    if(slowo == "ALA"){return wersja1;}
    else if(slowo == "MA"){return wersja2;}
    else if(slowo == "KOTA"){return wersja3;}
    else return -1;
}

void Zadania::zad4_6() {
    std::cout<<"Zadanie 4.6"<<std::endl;
    cout<<"--------------------------------------\n"
          "Napisz program wykorzystujący instrukcje 'switch' gdzie:\n"
          "- zamiast pojedynczego znaku będzie sprawdzane całe słowo\n"
          "- program może być uszczegółowieniem/modyfikacją (zrobić kopie pliku i zmienić kopie) tego co jest w ZadParzysteCase.cc\n"
          "- nazwać program: ZadSwitch.cc"<<endl;

    string slowo;
    cout<<"Proszę podać słowo: [do wyboru: ALA, MA, KOTA] ";
    cin>>slowo;
    cout<<"Podane słowo: "<<slowo<<". Instrukcja Switch może być używana wyłącznie z wartościami liczb całkowitych!"<<endl;

    switch(getCommandNumber(slowo)){
        case wersja1:
            cout<<"SWITCH WYBRANO [ALA]"<<endl;
            break;

        case wersja2:
            cout<<"SWITCH WYBRANO [MA]"<<endl;
            break;

        case wersja3:
            cout<<"WYBRANO SWITCH [KOTA]"<<endl;
            break;
    }
}

