//
// Created by andrzej on 02.06.2021.
//
#include <iostream>
#include "../include/Zadania.h"
using namespace std;

void a(), b();
int c();

void Zadania::zad4_5() {
    std::cout<<"Zadanie 4.5"<<std::endl;
    cout<<"--------------------------------------\n"
          "Napisz program pokazujący działanie instrukcji (każda jako osobna funkcja; trzy funkcje od a do c):\n"
          "(a) while    (pokazujące while z inkrementacją: i++, ++i)\n"
          "(b) do-while (pokazujące do-while z inkrementacją: i++, ++i)\n"
          "(c) for\n"
          "- wykorzystaj: break, continue, return\n"
          "- nazwać program: ZadPetle.cc"<<endl;

    a();
    b();
    c();
}

int rozmiarPetli=3;

void a(){
    int a=0;
    cout<<"while postinkrementacja"<<endl;
    while(a<rozmiarPetli){
        cout<<a++<<endl;
    }

    a=0;
    cout<<"\nwhile preinkrementacja"<<endl;
    while(a<rozmiarPetli){
        cout<<++a<<endl;
    }
}


void b(){
    int a=0;
    cout<<"\ndo-while postinkrementacja"<<endl;
    do{
        cout<<a++<<endl;
    }while(a<rozmiarPetli);

    a=0;
    cout<<"\ndo-while preinkrementacja"<<endl;
    do{
        cout<<++a<<endl;
    }while(a<rozmiarPetli);
}

int c(){
    cout<<"\nFOR: continue"<<endl;
    for(int i=0; i<rozmiarPetli; i++){
        if(i==1)
            continue;
        cout<<i<<endl;
    }

    cout<<"\nFOR: break"<<endl;
    for(int i=0; i<rozmiarPetli; i++){
        if(i==1)
            break;
        cout<<i<<endl;
    }

    cout<<"\nFOR: return"<<endl;
    for(int i=0; i<rozmiarPetli; i++){
        if(i==1)
            return i;
        cout<<i<<endl;
    }
}