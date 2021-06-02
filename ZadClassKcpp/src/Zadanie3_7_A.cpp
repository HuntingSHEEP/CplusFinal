//
// Created by andrzej on 02.06.2021.
//
#include <iostream>
#include "../include/Zadania.h"
using namespace std;

void Zadania::zad3_7() {
    std::cout<<"Zadanie 3.7: ZadBin2Dec"<<std::endl;
    cout<<"--------------------------------------\n"
          "Napisać program przeliczający\n"
          "- liczby binarne na dziesiętne (nazwać: ZadBin2Dec.cc)\n"
          "- liczby dziesiętne na binarne (nazwać: ZadDec2Bin.cc)\n"
          "\n"
          "  Przykłady\n"
          "  (github) LPrzeliczanieDec2BinA.cc\n"
          "  (github) LPrzeliczanieDec2BinB.cc"<<endl;

    int a = 6;
    int binary[a];
    int i=0;

    int modulo;

    do{
        modulo = a%2;
        binary[i]=modulo;
        //cout<<binary[i];
        a /= 2;
        i++;
    }while(a>0);

    for(int a=i-1; a>=0; a--)
        cout<<binary[a];
}