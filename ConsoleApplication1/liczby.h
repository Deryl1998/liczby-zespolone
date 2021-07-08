#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

template <class jakis_typ> class Wektor
{
public:
vector<vector<jakis_typ> >macierz;
Wektor(){};
Wektor(int){
int ilosc=1;vector <jakis_typ> kolumna;
jakis_typ a;
string user_2="n";
    for (int i=0;i<ilosc;i++)
        {
            cout <<"Wiersz " << i+1<<endl;
            macierz.push_back(kolumna);
     for (int j=0;j<ilosc;j++)
            {
            cout << "wprowadz Liczbe "; cin >> a;
            macierz[i].push_back(a);
            if(i==1 && j==0)   ilosc=ilosc-1;
            if(i==0){
            ilosc=macierz[i].size()+1;
            cout<<"Zakonczyc dodawanie liczb do tego wiersza? "; cin >>user_2;
            if( user_2=="t")  break;
                    }
            }
    user_2="n";
        }
system("CLS");
    }

 // DODAWANIE
vector<vector<jakis_typ> > operator +( const Wektor &v ){
    vector<vector<jakis_typ> >suma; vector<jakis_typ> kolumna;
  for (int i=0;i<macierz.size();i++){
        suma.push_back(kolumna);
    for (int j=0;j<macierz.size();j++){
    suma[i].push_back(macierz[i][j]+v.macierz[i][j]);
    } }
return suma;}

// ODEJMOWANIE
vector<vector<jakis_typ> > operator -( const Wektor &v ){
    vector<vector<jakis_typ> >suma; vector<jakis_typ> kolumna;
  for (int i=0;i<macierz.size();i++){
        suma.push_back(kolumna);
    for (int j=0;j<macierz.size();j++){
    suma[i].push_back(macierz[i][j]-v.macierz[i][j]);
    } }
return suma;}

 // Mnozenie przez liczbe
vector<vector<jakis_typ> > operator *( int &a ){
    vector<vector<jakis_typ> >wynik; vector<jakis_typ> kolumna;
    int x;
  for (int i=0;i<macierz.size();i++){
        wynik.push_back(kolumna);
    for (int j=0;j<macierz.size();j++){
    x=macierz[i][j]*a;
    wynik[i].push_back(x);
    } }
return wynik;}

void wyswietl(){
    int licznik=macierz.size();
  for (int i=0;i<licznik;i++){
            for (int j=0;j<licznik;j++){
          cout <<" | "<< macierz[i][j] <<" | ";}
cout<<endl;}
cout <<endl;

return ;}

// MNOZENIE
vector<vector<jakis_typ> > operator *( const Wektor &v ){
vector <vector <jakis_typ> > xxx;  jakis_typ y=0; vector <jakis_typ> wiersz;
    for (int i=0;i<macierz.size();i++)
    {
            xxx.push_back(wiersz);
        for (int k=0;k<macierz[i].size();k++)
        {
            for (int j=0;j<macierz[k].size();j++)
                {
                        y=y+(macierz[i][j]*v.macierz[j][k]);

                }
                xxx[i].push_back(y); y=0;
        }
    }
return xxx;
}
};

