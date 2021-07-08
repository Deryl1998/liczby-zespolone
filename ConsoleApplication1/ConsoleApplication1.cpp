#include <iostream>
#include <cstdlib>
#include <vector>
#include "zespolone.h"
#include "3d.h"
#include "liczby.h"
using namespace std;

int main(){
int user=1,liczba;

while (user!=0)
{
    cout <<" macierze elementow dowolnego typu - 1"<<endl;
    cout <<" macierze liczb zespolonych        - 2"<<endl;
    cout <<" macierze liczb 3d                 - 3"<<endl;
    cout <<"Wybor "; cin >> user;

    switch(user)
 {
   case 1:
    {
        Wektor<float> flolt(0);
        Wektor<float> mac;
        cout<<"Macierz glowna "<<endl;flolt.wyswietl();
        cout<<"wynik dodawania"<<endl;mac.macierz=flolt+flolt;mac.wyswietl();
        cout<<"wynik odejmowania"<<endl;mac.macierz=flolt-flolt;mac.wyswietl();
        cout<<"wynik mnozenia"<<endl;mac.macierz=flolt*flolt;mac.wyswietl();
        cout<<"Mnozenie przez liczbe - wprowadz liczbe "; cin>>liczba;
        cout<<"wynik mnozenia przez liczbe "<<endl;mac.macierz=flolt*liczba;mac.wyswietl();
        break;
    }
    case 2:
    {
        Zespolone<float> flolt(0);
        Zespolone<float> mac;
        cout<<"Macierz glowna "<<endl;flolt.wyswietl();
        cout<<"wynik dodawania"<<endl;mac.macierz=flolt+flolt;mac.wyswietl();
        cout<<"wynik odejmowania"<<endl;mac.macierz=flolt-flolt;mac.wyswietl();
        cout<<"wynik mnozenia"<<endl;mac.macierz=flolt*flolt;mac.wyswietl();
        cout<<"Mnozenie przez liczbe - wprowadz liczbe "; cin>>liczba;
        cout<<"wynik mnozenia przez liczbe "<<endl;mac.macierz=flolt*liczba;mac.wyswietl();
        break;
    }
    case 3:
    {
        Trojwymiarowe<float> flolt(0);
        Trojwymiarowe<float> mac;
        cout<<"Macierz glowna "<<endl;flolt.wyswietl();
        cout<<"wynik dodawania"<<endl;mac.macierz=flolt+flolt;mac.wyswietl();
        cout<<"wynik odejmowania"<<endl;mac.macierz=flolt-flolt;mac.wyswietl();
        cout<<"wynik mnozenia"<<endl;mac.macierz=flolt*flolt;mac.wyswietl();
        cout<<"Mnozenie przez liczbe - wprowadz liczbe "; cin>>liczba;
        cout<<"wynik mnozenia przez liczbe "<<endl; mac.macierz=flolt*liczba; mac.wyswietl();
        break;
    }
 }
}

return 0;}

