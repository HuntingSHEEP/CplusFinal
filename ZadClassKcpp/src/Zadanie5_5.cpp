//
// Created by andrzej on 08.06.2021.
//
#include "../include/Zadania.h"
#include <iostream>
using namespace std;

class A;

class B{
public:
    B(){
        this->b=3;
    }
    //int getA(A &obj){return obj.a;}

private:
    int b;
    friend class A;
};

class A{
public:
    A(){
        this->a=3;
    }
    int getB(B &obj){return obj.b;}

private:
    int a;
    //friend class B; Przyjaźń dwustronna z jakiegoś powodu nie działa - tak chyba ma być. Smutne, ale prawdziwe.

};
void Zadania::zad5_5() {
    std::cout<<"Zadanie 5.5"<<std::endl;
    cout<<"Zadanie 5.5\n"
          "--------------------------------------\n"
          "Sprawdzić dziłanie przyjaźni klas:\n"
          "- Klasa B zaprzyjaźniona z klasą A ma ma dostęp do składników prywatnych\n"
          "- Czy klasa A w tym samym momencie może być także zaprzyjaźniona z klasą B?\n"
          "    \n"
          "Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.\n"
          "https://www.geeksforgeeks.org/friend-class-function-cpp/"<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

    A objA = A();
    B objB = B();
}