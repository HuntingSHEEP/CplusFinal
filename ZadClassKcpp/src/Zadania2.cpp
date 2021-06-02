//
// Created by andrzej on 02.06.2021.
//

#include <iostream>
#include "../include/Zadania.h"

using namespace std;

int fWartosc(){
    return 2;
}

void fReferencja(int *x){
    int na = 55;
    (*x) = na;
}

int *fWskaznik(){
    int *q = (int*) malloc(sizeof (int));
    (*q) = 112;
    return q;
}

int *fTablica(){
    int rozmiar = 10;
    int *tablica = (int*) malloc(sizeof (int)*rozmiar);
    for(int i=0; i<rozmiar; i++)
        (*(tablica + i)) = i+3;
    return tablica;
}

void getTable0(int *tablePointer, int tableSize){
    for(int i=0; i<tableSize; i++)
        cout<<" i "<<i<<": "<<*(tablePointer+i)<<endl;
}


//================ -- ZADANIA 2 -- ==============
void Zadania::zad2_1() {
    std::cout<<"Zadanie 2.1"<<std::endl;
    cout<<"--------------------------------------\n"
          "Zadanie: Napisać program z czterema funkcjami z których każda zwraca inaczej:\n"
          "1. Przez wartość\n"
          "2. Przez referencje\n"
          "3. Przez wskaźnik\n"
          "4. Tablice (proszę się zastanowić o co tak naprawę chodzi)\n"
          "- nazwać program: ZadZwracanie.cc"<<endl;

    int a = fWartosc();
    int b;
    fReferencja(&b);

    int *c = fWskaznik();
    int *mojaNowaTablica = fTablica();

    cout<<"Pierwsza funkcja: "<<a<<endl;
    cout<<"Druga funkcja: "<<b<<", adres zmiennej: "<<&b<<endl;
    cout<<"Trzecia funkcja: "<<*c<<", adres zmiennej: "<<c<<endl;

    for(int i=0; i<10; i++)
        cout<<"Czwarta funkcja:("<<i<<") :"<<*(mojaNowaTablica+i)<<endl;
}

void Zadania::zad2_2() {
    std::cout<<"Zadanie 2.2"<<std::endl;
    cout<<"Napisz program przekazujący tablice z zachowaniem rozmiaru\n"
          "- nazwać program: ZadPrzekazywanieTablic.cc"<<endl;

    //to działa dobrze
    int mojaTablica[] = {0,1,2,3,4,5};
    cout<<sizeof(mojaTablica)/sizeof(mojaTablica[0])<<endl;

    getTable0(mojaTablica,sizeof(mojaTablica)/sizeof(mojaTablica[0]));
}
