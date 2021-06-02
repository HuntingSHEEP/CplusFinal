//
// Created by andrzej on 02.06.2021.
//
#include <iostream>
#include "../include/Zadania.h"
using namespace std;

void funkcja1();
void funkcja1_1();
void funkcja2();

void Zadania::zad3_3() {
    std::cout<<"Zadanie 3.3"<<std::endl;
    cout<<" Co robia ponizsze operacje? Napisac program ktory pokazuje ich dzialanie.\n"
          " 1. Funkcja1(): Przy deklaracji zmiennych\n"
          " 2. Funkcja2(): Przy deklaracji tablicy\n"
          " p++;\n"
          " ++p;\n"
          " ++*p;\n"
          " ++(*p);\n"
          " ++*(p);\n"
          " *p++;\n"
          " (*p)++;\n"
          " *(p)++;\n"
          " *++p;\n"
          " *(++p);\n"
          "\n"
          " oraz (Funkcja3()) w analogii do LArytmetykaWzkaznikowZmienne.cc aby wypisywal na ekran:\n"
          "\n"
          " 1.  A, B, C: 0  0   0\n"
          " 2.  A, B, C: 0  10  0\n"
          " 3.  A, B, C: 0  10  20\n"
          " 4.  A, B, C: 0  30  20\n"
          " 5.  A, B, C: 40 30  20\n"
          " 6.  A, B, C: 40 50  20\n"
          " 7.  A, B, C: 40 50  60\n"
          " 8.  A, B, C: 40 70  60\n"
          " 9.  A, B, C: 80 70  60\n"
          " 10. A, B, C: 80 90  60\n"
          "\n"
          " przy poczatkowych zmmiennych: int a = 0, b = 0, c = 0;\n"
          " - nazwać program: ZadArytmetykaWskaznikow.cc"<<endl;

    funkcja1();
    funkcja1_1();
    funkcja2();
}

void funkcja1(){
    cout<<"\n\n================Funkcja1"<<endl;
    int a =1;
    int *p = &a; //inicjalizacja zmiennej
    cout<<"  *p: "<<*p<<endl;

    cout<<"w trakcie p++: "<<p++<<endl;
    cout<<"zaraz po  p++: "<<p<<endl;

    cout<<"w trakcie ++p: "<<++p<<endl;
    cout<<"zaraz po  ++p: "<<p<<endl;

    //cout<<"w trakcie ++*p: "<<++*p<<endl;  zrzut pamięci
    //cout<<"zaraz po  ++*p: "<<*p<<endl;

    /* też zrzuty pamięci
    cout<<"w trakcie ++(*p): "<<++(*p)<<endl;
    cout<<"zaraz po  ++(*p) (*p): "<<*p<<endl;
    cout<<"zaraz po  ++(*p) (samo p): "<<p<<endl;
    */

    /*zrzut pamięci
    cout<<"w trakcie ++*(p): "<<++*(p)<<endl;
    cout<<"zaraz po  ++*(p) (*p): "<<*p<<endl;
    cout<<"zaraz po  ++*(p) (samo p): "<<p<<endl;
    */

    cout<<"w trakcie *p++: "<<*p++<<endl;
    cout<<"zaraz po *p++: (*p): "<<*p<<endl;
    cout<<"zaraz po *p++: (samo p): "<<p<<endl;

/* stack smashing
  cout<<"w trakcie (*p)++: "<<(*p)++<<endl;
  cout<<"zaraz po (*p)++: (*p): "<<*p<<endl;
  cout<<"zaraz po (*p)++: (samo p): "<<p<<endl;
  */


    cout<<"w trakcie *(p)++: "<<*(p)++<<endl;
    cout<<"zaraz po *(p)++: (*p): "<<*p<<endl;
    cout<<"zaraz po *(p)++: (samo p): "<<p<<endl;

    cout<<"w trakcie *++p: "<<*++p<<endl;
    cout<<"zaraz po *++p: (*p): "<<*p<<endl;
    cout<<"zaraz po *++p: (samo p): "<<p<<endl;

    cout<<"w trakcie *(++p): "<<*(++p)<<endl;
    cout<<"zaraz po *(++p): (*p): "<<*p<<endl;
    cout<<"zaraz po *(++p): (samo p): "<<p<<endl;
}

void funkcja1_1(){
    cout<<"\n\n================Funkcja1_1"<<endl;
    cout<<"TABLICA"<<endl;
    int a[] = {1,2,3,4,5,6,7};
    int *p = a; //inicjalizacja zmiennej
    cout<<"  *p: "<<*p<<endl;

    cout<<"w trakcie p++: "<<p++<<endl;
    cout<<"zaraz po  p++: "<<p<<endl;

    cout<<"w trakcie ++p: "<<++p<<endl;
    cout<<"zaraz po  ++p: "<<p<<endl;

    //cout<<"w trakcie ++*p: "<<++*p<<endl;  zrzut pamięci
    //cout<<"zaraz po  ++*p: "<<*p<<endl;


    cout<<"w trakcie ++(*p): "<<++(*p)<<endl;
    cout<<"zaraz po  ++(*p) (*p): "<<*p<<endl;
    cout<<"zaraz po  ++(*p) (samo p): "<<p<<endl;



    cout<<"w trakcie ++*(p): "<<++*(p)<<endl;
    cout<<"zaraz po  ++*(p) (*p): "<<*p<<endl;
    cout<<"zaraz po  ++*(p) (samo p): "<<p<<endl;


    cout<<"w trakcie *p++: "<<*p++<<endl;
    cout<<"zaraz po *p++: (*p): "<<*p<<endl;
    cout<<"zaraz po *p++: (samo p): "<<p<<endl;

/* stack smashing
  cout<<"w trakcie (*p)++: "<<(*p)++<<endl;
  cout<<"zaraz po (*p)++: (*p): "<<*p<<endl;
  cout<<"zaraz po (*p)++: (samo p): "<<p<<endl;
  */


    cout<<"w trakcie *(p)++: "<<*(p)++<<endl;
    cout<<"zaraz po *(p)++: (*p): "<<*p<<endl;
    cout<<"zaraz po *(p)++: (samo p): "<<p<<endl;

    cout<<"w trakcie *++p: "<<*++p<<endl;
    cout<<"zaraz po *++p: (*p): "<<*p<<endl;
    cout<<"zaraz po *++p: (samo p): "<<p<<endl;

    cout<<"w trakcie *(++p): "<<*(++p)<<endl;
    cout<<"zaraz po *(++p): (*p): "<<*p<<endl;
    cout<<"zaraz po *(++p): (samo p): "<<p<<endl;
}

void funkcja2(){
    cout<<"\n\n================Funkcja2"<<endl;
    int a = 0;
    int b = 0;
    int c = 0;

    cout<<"adresy"<<endl;
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<&c<<endl;

    cout<<&b - &a<<endl;

    cout<<"\n1. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

    b=10;
    cout<<"2. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

    *(&b + 1) = b+10;
    cout<<"3. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

    b+=*(&b + 1);
    cout<<"4. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

    *(&b - 1) = 2 * *(&b + 1);
    cout<<"5. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

    b += * (&b + 1);
    cout<<"6. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

    *(&b + 1) += *(&b - 1);
    cout<<"7. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

    b+=20;
    cout<<"8. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

    *(&b - 1) *= 2;
    cout<<"9. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

    b += *(&b - 1)/4;
    cout<<"10. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

    //cout<<"4. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;


}