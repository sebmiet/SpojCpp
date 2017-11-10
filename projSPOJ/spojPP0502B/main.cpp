#include <iostream>

using namespace std;
int proby, ilosc, liczba;
double *tab=NULL;
int main()
{
  cin>>proby;
  for(int i=1; i<=proby; i++)
  {
      cin>>ilosc;
      tab=new double[ilosc];
      for(int j=0; j<ilosc; j++)
      {
          cin>>liczba;
          tab[j]=liczba;
      }
      for(int k=ilosc-1; k>=0; k--)
      {
          cout<<tab[k]<<" ";
      }
    cout<<endl;
  }

    return 0;
}
