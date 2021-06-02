//
// Created by andrzej on 02.06.2021.
//
#include <iostream>
#include "../include/Zadania.h"
using namespace std;

void Zadania::zad3_1() {
    std::cout<<"Zadanie 3.1"<<std::endl;
    cout<<" Kierunek adresowania pamięci \n"
          " - wyjaśnić w komentarzu do programu podającego przykład:\n"
          " - wypisywanie adresów deklarowanych zmiennych\n"
          " - nazwać program: ZadAdresowaniePamieci.cc"<<endl;
    /*
  Sprawdzenie kolejności adresowania zmiennych w pamięci.
  Na podstawie zmiennej typu int.
  W moim przypadku adresowanie było rosnące.
  gcc version 9.2.1 20191008 (Ubuntu 9.2.1-9ubuntu2)

  */
    int a = 1;
    int b = 2;
    int c = 3;

    cout <<"Adres a: "<<&a<<endl;
    cout <<"Adres b: "<<&b<<endl;
    cout <<"Adres c: "<<&c<<endl;

    if(&a < &b){
        cout<<"Adresowanie INT jest rosnące!"<<endl;
    }else if(&b < &a){
        cout<<"Adresowanie INT jest malejące!"<<endl;
    }
}