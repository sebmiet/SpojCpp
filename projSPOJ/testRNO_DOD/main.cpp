//Suma elementow tablicy
//uwaga: elementy tablicy w C numerowane sa od 0
//       zatem nasza tablica ma indeksy od 0 do n-1
//       a[0], a[1], ..., a[n-1]
//www.algorytm.org

#include<iostream>
using namespace std;

int main()
{
int ilosc; // definicja zmiennej typu int
double *tablica = NULL; // definicja wskaznika na zmienna typu double (przypisujemy do niego NULL)
double wynik;
cout << "Podaj wielkosc tablicy: ";
cin >> ilosc; // wczytanie ilosc liczb, ktore maja sie znalezc w tablicy
tablica = new double[ilosc]; // dynamiczne utworzenie tablicy (nie warto tworzyc jej statycznie bo mozemy miec za malo lub za duzo i marnowac miejsce
for (int i = 0; i < ilosc; i++) // petla wczytujaca liczby do tablicy
{
cout << "tablica[" << i+1 << "] = ";
cin >>tablica[i];
}
wynik = 0; // wyzerowanie sumy liczb w tablicy
for (int i = 0; i < ilosc; i++)
wynik += tablica[i]; // dodawanie do sumy kolejnego elementu
cout << "Suma liczb w tablicy wynosi: " << wynik << endl;
return 0; // zakonczenie dzialania funkcji main i calego programu
}
