//
// Created by andrzej on 08.06.2021.
//

#include "../include/Zadania.h"
#include <iostream>
#include <math.h>

using namespace std;

class Point{
public:
    double x, y;

    Point (){
        this->x = 0;
        this->y = 0;
    }

    Point(double x, double y){
        this->x = x;
        this->y = y;
    }

    double odleglosc(Point p){
        return (x-p.x)*(x-p.x) + (y-p.y)*(y-p.y);
    }
};

class Figura{
public:
    Point srodek;
    virtual double Pole() = 0;
    virtual void wypiszWymaluj() = 0;

    double dystans(Figura* f){
        //troszkę to zrobilem inaczej, mianowicie obliczam odległość do dowolnej podanej figury
        double dx = f->srodek.x - srodek.x;
        double dy = f->srodek.y - srodek.y;
        double distance = sqrt(dx*dx + dy*dy);
        return distance;
    }
};



class Kwadrat : public Figura{
public:
    double a, b;

    Kwadrat(double a, Point p){
        this->a = a;
        this->b = a;
        this->srodek = p;
    }

    double Pole(){
        return a*b;
    }

    void wypiszWymaluj(){
        cout<<"Kwadrat o polu: "<<Pole()<<endl;
    }
};

class Prostokat : public Figura{
public:
    double a, b;

    Prostokat(double a, double b, Point p){
        this->a = a;
        this->b = b;
        this->srodek = p;
    }

    double Pole(){
        return a*b;
    }

    void wypiszWymaluj(){
        cout<<"Kwadrat o polu: "<<Pole()<<endl;
    }
};



class Kolo : public Figura{
public:
  double r;
  double pi;

  Kolo(double r, Point p){
    this->r = r;
    this->pi = 3.1415;
    this->srodek = p;
  }

  double Pole(){
    return pi*r*r;
  }

  void wypiszWymaluj(){
    cout<<"Koło o polu: "<<Pole()<<endl;
  }
};

class Trojkat : public Figura{
public:
    double a, b, c;

    Trojkat(double a, double b, double c, Point p){
        this->a = a;
        this->b = b;
        this->c = c;
        this->srodek = p;
    }

    double Pole(){
        double p = (a+b+c)/2;
        double pole = sqrt(p*(p-a)*(p-b)*(p-c));
        return pole;
    }

    void wypiszWymaluj(){
        cout<<"Kwadrat o polu: "<<Pole()<<endl;
    }

};



//#####################################################################################

void Zadania::zad5_6() {
    std::cout<<"Zadanie 5.6"<<std::endl;
    cout<<"Zadanie 5.6\n"
          "--------------------------------------\n"
          "Bazując na pliku LClassMetodyAbstrakcyjne.cc stwórz program który oblicza:\n"
          "- obwód, pole powierzchni\n"
          "dla:\n"
          "- kwadrat, trójkąt, prostokąt, koło (jako klasy dziedziczące po klasie abstrakcyjnej Figura),\n"
          "oraz funkcja Dystans (dodatkowo w klasie Koło):\n"
          "  Jeśli rząd podaje, że na każdego obywatela w sklepie (kościele etc) przypada X metrów kwadratowych (argument przekazywany do funkcji)\n"
          "  to w jakiej odległości (promieniu - to ma funkcja Dystans zwracać) może znaleźć się następna osoba.\n"
          "Nazwij program: ZadMetodyAbstrakcyjne.cc "<<endl;

    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

    Kwadrat k = Kwadrat(2, Point(0,0));
    Kwadrat k2 = Kwadrat(2, Point(3, 4));
    Kolo kolo = Kolo(2, Point(0,0));
    Kolo kolo2 = Kolo(3, Point(6, 8));

    k.wypiszWymaluj();
    cout<<"Kwadrat 1 oraz 2: DYSTANS: "<<k.dystans(&k2)<<endl;

    kolo.wypiszWymaluj();
    cout<<"Kolo 1 oraz 2: DYSTANS: "<<kolo.dystans(&kolo2)<<endl;

    cout<<"Kwadrat 1 oraz Kolo 2: DYSTANS: "<<k.dystans(&kolo2)<<endl;
}