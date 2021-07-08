#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

template <class jakis_typ> class Trojwymiarowe
{
public:
    struct struktura{
   jakis_typ a;
   jakis_typ b;
   jakis_typ c;
    };
vector<vector<struktura> >macierz;

Trojwymiarowe(){};

Trojwymiarowe(int){
int ilosc=1;vector <struktura> kolumna;
int wiersze=0;
 jakis_typ x1,x2,x3;
 struktura z;
string user_2="n";
    for (int i=0;i<ilosc;i++)
        {
            cout <<"Wiersz " << i+1<<endl;
            macierz.push_back(kolumna);
            wiersze++;
     for (int j=0;j<ilosc;j++)
            {
            cout << "wprowadz Liczbe a "; cin >> x1;
            macierz[i].push_back(z);
            macierz[i][j].a=x1;
            cout << "wprowadz Liczbe b "; cin >> x2;
            macierz[i][j].b=x2;
            cout << "wprowadz Liczbe b "; cin >> x3;
            macierz[i][j].c=x3;
            if(i==1 && j==0)   ilosc=ilosc-1;
            if(i==0){
                ilosc=macierz[i].size()+1;
                cout<<"Zakonczyc dodawanie liczb do tego wiersza? "; cin >>user_2;
                if( user_2=="t") break;
                    }
            }
    user_2="n";
        }
system("CLS");
    }

 // DODAWANIE
vector<vector<struktura> > operator +( const Trojwymiarowe &v ){
  vector<vector<struktura> > wynik; vector<struktura> kolumna;
   struktura z;
  for (int i=0;i<macierz.size();i++){
        wynik.push_back(kolumna);
    for (int j=0;j<macierz[i].size();j++){
    wynik[i].push_back(z);
    wynik[i][j].a=macierz[i][j].a+v.macierz[i][j].a;
    wynik[i][j].b=macierz[i][j].b+v.macierz[i][j].b;
    wynik[i][j].c=macierz[i][j].c+v.macierz[i][j].c;
    } }
return wynik;}

 // MNOZENIE PRZEZ LICZBE
vector<vector<struktura> > operator *( int &liczba ){
  vector<vector<struktura> > wynik; vector<struktura> kolumna;
   struktura z;
  for (int i=0;i<macierz.size();i++){
        wynik.push_back(kolumna);
    for (int j=0;j<macierz[i].size();j++){
    wynik[i].push_back(z);
    wynik[i][j].a=macierz[i][j].a*liczba;
    wynik[i][j].b=macierz[i][j].b*liczba;
    wynik[i][j].c=macierz[i][j].c*liczba;
    } }
return wynik;}

// Odejmowanie
vector<vector<struktura> > operator -( const Trojwymiarowe &v ){
  vector<vector<struktura> > wynik; vector<struktura> kolumna;
   struktura z;
  for (int i=0;i<macierz.size();i++){
        wynik.push_back(kolumna);
    for (int j=0;j<macierz[i].size();j++){
    wynik[i].push_back(z);
    wynik[i][j].a=macierz[i][j].a-v.macierz[i][j].a;
    wynik[i][j].b=macierz[i][j].b-v.macierz[i][j].b;
    wynik[i][j].c=macierz[i][j].c-v.macierz[i][j].c;
    } }
return wynik;}

void wyswietl(){
    int licznik;
  for (int i=0;i<macierz.size();i++){
            for (int j=0;j<macierz[0].size();j++){
          cout <<" | "<< macierz[i][j].a <<" ";
          cout <<macierz[i][j].b <<" ";
          cout <<macierz[i][j].c <<" | ";
          }
cout<<endl;}
cout <<endl;

return ;}

// MNOZENIE
vector<vector<struktura> > operator *( const Trojwymiarowe &v ){
struktura obiekt;
vector <vector <struktura> > xxx;  jakis_typ y=0,x=0,z=0; vector <struktura> wiersz;
    for (int i=0;i<macierz.size();i++)
    {
            xxx.push_back(wiersz);
        for (int k=0;k<macierz[i].size();k++)
        {
            for (int j=0;j<macierz[k].size();j++)
                {
                        y=y+(macierz[i][j].a*v.macierz[j][k].a);
                        x=x+(macierz[i][j].b*v.macierz[j][k].b);
                        z=z+(macierz[i][j].c*v.macierz[j][k].c);

                }
                xxx[i].push_back(obiekt); xxx[i][k].a=y; xxx[i][k].b=x; xxx[i][k].c=z; y=0;x=0;z=0;
        }
    }
return xxx;
}
};
