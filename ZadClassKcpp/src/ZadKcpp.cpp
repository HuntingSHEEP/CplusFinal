//
// Created by andrzej on 02.06.2021.
//

#include "../include/ZadKcpp.h"
using namespace std;

ZadKcpp::ZadKcpp() {
    this->endProgram = false;
}

void ZadKcpp::start() {
    do{
        lifeCycle();
    }while(coDalej());
}


int ZadKcpp::mainMenu() {
    string menu[] = {"====== Main Menu ======",
                     "[a] 1.1) ZadMainExample: Extern C\n-------------------",

                     "[b] 2.1) ZadZwracanie",
                     "[c] 2.2) ZadPrzekazywanieTablic\n-------------------",

                     "[d] 3.1) ZadAdresowaniePamieci",
                     "[e] 3.2) ZadIq",
                     "[f] 3.3) ZadArytmetykaWskaznikow",
                     "[g] 3.4) ZadWywolanieFunkcji",
                     "[h] 3.5) ZadOperatoryPrzypisania",
                     "[i] 3.6) ZadPriorytetyOperatorow",
                     "[j] 3.7) ZadBin2Dec",
                     "[k] 3.7) ZadDec2Bin\n-------------------",

                     "[l] 4.0) LManipulacjaStrumieniemCout",
                     "[m] 4.1) ZadCinCoutFile",
                     "[n] 4.2) ZadCandCPP",
                     "[o] 4.3) ZadParzysta",
                     "[p] 4.4) ZadParzystaCase",
                     "[q] 4.5) ZadPetle",
                     "[r] 4.6) ZadSwitch",
                     "[s] 4.7) ZadPreprocesor\n-------------------",

                     "[t] 5.1) ZadClass",
                     "[u] 5.2) ZadStruct",
                     "[v] 5.3) ZadUnia",
                     "[w] 5.4) ZadKlasaKonstruktor & ZadStructKonstruktor",
                     "[x] 5.5) Przyjaźń w klasach",
                     "[y] 5.6) ZadMetodyAbstrakcyjne\n-------------------",

                     "[z] Koniec programu.\n\n"
    };

    for(string m:menu){
        cout<<m<<endl;
    }

    char z;
    do{
        cout<<"Proszę wybrać zadanie [a - z]: ";
        cin>>z;
    }while(!((97 <= z) && (z <= 123)));

    system("clear");
    return z;
}

void ZadKcpp::wykonajZadanie(int numerZadania) {
    switch(numerZadania){
        case 97: zadania.zad1_1(); break;

        case 98: zadania.zad2_1(); break;
        case 99: zadania.zad2_2(); break;

        case 100: zadania.zad3_1(); break;
        case 101: zadania.zad3_2(); break;
        case 102: zadania.zad3_3(); break;
        case 103: zadania.zad3_4(); break;
        case 104: zadania.zad3_5(); break;
        case 105: zadania.zad3_6(); break;
        case 106: zadania.zad3_7(); break;
        case 107: zadania.zad3_7b(); break;

        case 108: zadania.zad4_0(); break;
        case 109: zadania.zad4_1(); break;
        case 110: zadania.zad4_2(); break;
        case 111: zadania.zad4_3(); break;
        case 112: zadania.zad4_4(); break;
        case 113: zadania.zad4_5(); break;
        case 114: zadania.zad4_6(); break;
        case 115: zadania.zad4_7(); break;

        case 116: zadania.zad5_1(); break;
        case 117: zadania.zad5_2(); break;
        case 118: zadania.zad5_3(); break;
        case 119: zadania.zad5_4(); break;
        case 120: zadania.zad5_5(); break;
        case 121: zadania.zad5_6(); break;

        case 122: endProgram = true; break;
    }

    //system("clear");
}

void ZadKcpp::lifeCycle() {
    int numerZadania = mainMenu();
    wykonajZadanie(numerZadania);
}

bool ZadKcpp::coDalej() {
    if(endProgram){
        return false;
    }

    string dialogi[] = {"\n=====================================\nCo chcesz teraz uczynić?",
                        "[1] Powrót do Menu Głównego."
                        "\n[0] Koniec Programu."
    };

    for(string d:dialogi){
        cout<<d<<endl;
    }

    char z;
    do{
        cout<<"Wybierz akcję: ";
        cin>>z;

    }while(!((48 <= z) && (z <= 49)));

    system("clear");
    if(z == 48){
        return false;
    }else{
        return true;
    }
}
