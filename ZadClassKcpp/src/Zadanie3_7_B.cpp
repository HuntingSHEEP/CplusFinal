//
// Created by andrzej on 02.06.2021.
//

#include <iostream>
#include "../include/Zadania.h"
using namespace std;

int pwr(int a, int n){
    int wynik = 1;
    while(n>0){
        wynik *= a;
        n--;
    }
    return wynik;
}

void Zadania::zad3_7b() {
    std::cout<<"Zadanie 3.7B: ZadDec2Bin"<<std::endl;
    cout<<"--------------------------------------\n"
          "Napisać program przeliczający\n"
          "- liczby binarne na dziesiętne (nazwać: ZadBin2Dec.cc)\n"
          "- liczby dziesiętne na binarne (nazwać: ZadDec2Bin.cc)\n"
          "\n"
          "  Przykłady\n"
          "  (github) LPrzeliczanieDec2BinA.cc\n"
          "  (github) LPrzeliczanieDec2BinB.cc"<<endl;

    string binary = "0100";

    int wynik=0;
    for(int i=0; i<binary.length(); i++){
        wynik+= ((int) binary[i] - 48) * pwr(2, binary.length()-1-i);
    }


    cout <<wynik;
}