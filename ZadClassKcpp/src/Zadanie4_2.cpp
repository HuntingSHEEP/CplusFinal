//
// Created by andrzej on 02.06.2021.
//
#include <iostream>
#include "../include/Zadania.h"
using namespace std;

void CC();

void Zadania::zad4_2() {
    std::cout<<"Zadanie 4.2"<<std::endl;
    cout<<"--------------------------------------\n"
          "Napisz program:\n"
          "- pokazujący wykonanie tych samych operacji w c i c++ (kcpp02::34)\n"
          "- nazwać program: ZadCandCPP.cc"<<endl;

    CC();
}



void CC(){
    int *a = (int*) malloc(sizeof(int));
    cout<<"WYPISANIE WSKAŹNIKA"<<endl;
    printf("%p\n", a);
    cout<<a<<endl;

    cout<<"\nWYPISANIE ZAWARTOŚCI WSKAŹNIKA"<<endl;
    printf("%d\n", *a);
    cout<<*a<<endl;

    double d = 2.451;
    cout<<"\nWYPISANIE DOUBLE"<<endl;
    printf("%lf\n", d);
    cout<<d<<endl;

    int dd;
    cout<<"POBRANIE ZMIENNEJ INT (Podaj proszę liczbę całkowitą)"<<endl;
    scanf(" %d", &dd);
    cout<<"dd: "<<dd<<"\nPonownie podaj liczbę całkowitą"<<endl;
    cin>> dd;
    cout<<"dd: "<<dd<<endl;


    double z;
    cout<<"POBRANIE ZMIENNEJ DOUBLE (Proszę podać)"<<endl;
    scanf(" %lf", &z);
    cout<<"z: "<<z<<"\nProszę podać drugą liczbę zmiennoprzecinkową"<<endl;
    cin>> z ;
    cout<<"z: "<<z<<endl;
}