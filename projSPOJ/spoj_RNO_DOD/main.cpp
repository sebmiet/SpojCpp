#include <iostream>

using namespace std;

int main()
{
    int proby, ilosc;
    double *tablica=NULL, suma;
    cin>>proby;

    for(int i=1; i<=proby; i++)
    {
        cin>>ilosc;
        tablica=new double[ilosc];
        for(int j=0; j<ilosc; j++)
        {
            cin>>tablica[j];
        }

        suma=0;
        for (int k=0; k<=ilosc; k++)
        {
            suma+=tablica[k];
        }
        cout<<suma<<endl;

    }

    return 0;
}
