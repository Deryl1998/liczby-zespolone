#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

template <class jakis_typ> class Zespolone
{
public:
    struct zesp{
   jakis_typ a;
   jakis_typ b;
    };

vector<vector<zesp> >macierz;
Zespolone(){};
Zespolone(int){
int ilosc=1;vector <zesp> kolumna;
 jakis_typ x1,x2;
 zesp z;
string user_2="n";
    for (int i=0;i<ilosc;i++)
        {
            cout <<"Wiersz " << i+1<<endl;
            macierz.push_back(kolumna);
     for (int j=0;j<ilosc;j++)
            {
            cout << "wprowadz Liczbe a "; cin >> x1;
            macierz[i].push_back(z); macierz[i][j].a=x1;
            cout << "wprowadz Liczbe b "; cin >> x2;
            macierz[i][j].b=x2;
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
vector<vector<zesp> > operator +( const Zespolone &v ){
  vector<vector<zesp> > wynik; vector<zesp> kolumna;
   zesp z;
  for (int i=0;i<macierz.size();i++){
        wynik.push_back(kolumna);
    for (int j=0;j<macierz[i].size();j++){
    wynik[i].push_back(z);
    wynik[i][j].a=macierz[i][j].a+v.macierz[i][j].a;
    wynik[i][j].b=macierz[i][j].b+v.macierz[i][j].b;
    } }
return wynik;}

  // MNOZENIE PRZEZ LICZBE
vector<vector<zesp> > operator *( const int &liczba ){
  vector<vector<zesp> > wynik; vector<zesp> kolumna;
   zesp z;
  for (int i=0;i<macierz.size();i++){
        wynik.push_back(kolumna);
    for (int j=0;j<macierz[i].size();j++){
    wynik[i].push_back(z);
    wynik[i][j].a=macierz[i][j].a*liczba;
    wynik[i][j].b=macierz[i][j].b*liczba;
    } }
return wynik;}

 // ODEJMOWANIE
vector<vector<zesp> > operator -( const Zespolone &v ){
  vector<vector<zesp> > wynik; vector<zesp> kolumna;
   zesp z;
  for (int i=0;i<macierz.size();i++){
        wynik.push_back(kolumna);
    for (int j=0;j<macierz[i].size();j++){
    wynik[i].push_back(z);
    wynik[i][j].a=macierz[i][j].a-v.macierz[i][j].a;
    wynik[i][j].b=macierz[i][j].b-v.macierz[i][j].b;
    } }
return wynik;}

void wyswietl(){
    int licznik=macierz.size();
    int licznik2;
  for (int i=0;i<licznik;i++){
        licznik2=macierz[i].size();
            for (int j=0;j<licznik2;j++){
          cout <<" | "<< macierz[i][j].a <<" "<<macierz[i][j].b<<" | ";
          }
cout<<endl;}
cout <<endl;

return ;}

// MNOZENIE
vector<vector<zesp> > operator *( const Zespolone &v ){
zesp obiekt;
vector <vector <zesp> > xxx;  jakis_typ y=0,x=0; vector <zesp> wiersz;
    for (int i=0;i<macierz.size();i++)
    {
            xxx.push_back(wiersz);
        for (int k=0;k<macierz[i].size();k++)
        {
            for (int j=0;j<macierz[k].size();j++)
                {
                        y=y+(macierz[i][j].a*v.macierz[j][k].a);
                        x=x+(macierz[i][j].b*v.macierz[j][k].b);

                }
                xxx[i].push_back(obiekt); xxx[i][k].a=y; xxx[i][k].b=x; y=0;x=0;
        }
    }
return xxx;
}

};
