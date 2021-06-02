//
// Created by andrzej on 02.06.2021.
//
#include <iostream>
#include "../include/Zadania.h"
#include<fstream>
using namespace std;

string plik = "plikCC.txt";

void zapis(), odczyt();

void Zadania::zad4_1() {
    std::cout<<"Zadanie 4.1"<<std::endl;
    cout<<"--------------------------------------\n"
          "Napisz program pokazujący funkcjonalność:\n"
          "- wypisywania na ekran,\n"
          "- +zapisywanie do strumienie błędów\n"
          "- zapisywania do pliku,\n"
          "- odczytywania z pliku,\n"
          "- nazwać program: ZadCinCoutFile.cc"<<endl;

    zapis();
    odczyt();
}

void zapis(){
    cout<<"Zapis do pliku"<<endl;
    ofstream zapisDoPliku(plik);
    zapisDoPliku<<"No dzień dobry, "<<55<<" do widzenia państwu!";
    zapisDoPliku.close();
}

void odczyt(){
    cout<<"Odczyt z pliku"<<endl;
    ifstream odczytanie(plik);

    string dane;
    cout<<"z pliku:";

    while(odczytanie>>dane)
        cout<<dane<<" ";

    odczytanie.close();
}