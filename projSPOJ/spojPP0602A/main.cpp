#include <iostream>

using namespace std;

int main()
{
    int t; //deklaracja zmiennej odpowiadaj�cej za ilo�� test�w
    cin>>t; //wprowadzenie z klawiatury powy�szej zmiennej
    for(int i=1; i<=t; i++) //p�tla,
    {
        int ilosc;
        cin>>ilosc;
        int *tab=NULL;
        tab=new int[ilosc];
        int liczby;
        for(int j=0; j<ilosc; j++)
        {
            cin>>liczby;
            tab[j]=liczby;

        }

        for(int k=0; k<ilosc; k++)
        {
            if((k%2)!=0)
            {
                cout<<tab[k]<<" ";
            }
        }
        for(int m=0; m<ilosc; m++)
        {
            if((m%2)==0)
            {
                cout<<tab[m]<<" ";
            }
        }

        cout << endl;
        delete [] tab;
    }

    return 0;
}
