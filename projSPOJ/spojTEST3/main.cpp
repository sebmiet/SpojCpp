#include <iostream>

using namespace std;

int main()
{
    int liczba, qt42=0, *tab=NULL, i=0;

    do
    {
tab=new int[i];
        cin>>liczba;
        cout<<endl;
        tab[i]=liczba;

        if(tab[i]==42)
        {
            qt42++;  i++;
        }
        else
        {
             i++; continue;
        }

    }
    while(qt42==3);
    delete [] tab;
    return 0;
}
