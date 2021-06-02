//
// Created by andrzej on 02.06.2021.
//

#include <iostream>
#include "../include/Zadania.h"
using namespace std;

void funkcja10(){
    cout<<"FUNKCJA1"<<endl;
}

void funkcja20(){
    cout<<"FUNKCJA2"<<endl;
}


void Zadania::zad3_4() {
    std::cout<<"Zadanie 3.4"<<std::endl;
    cout<<"--------------------------------------\n"
          " Zaproponuj inne dwa sposoby wyboru wywołania funkcji\n"
          " - nazwać program: ZadWywolanieFunkcji.cc "<<endl;


    //dwa inne sposoby wyboru wywolywania funkcji

    // 3 sposób (numer funkcji zamiast nazwy)

    int a;
    cout<<"(3) Proszę wybrać funkcję: funkcja1() [1] lub funkcja2() [2]"<<endl;
    cin >> a;

    if (a == 1)
        funkcja10();
    else if (a == 2)
        funkcja20();

    // 4 sposób (switch)
    cout<<"(4) Proszę wybrać funkcję: funkcja1() [1] lub funkcja2() [2]"<<endl;
    cin >> a;

    switch (a){
        case 1:
            funkcja10();
            break;
        case 2:
            funkcja20();
    }


}