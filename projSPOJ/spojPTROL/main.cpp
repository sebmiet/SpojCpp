#include <iostream>

using namespace std;

int main()
{
    int proby;
    cin>>proby;
    for(int i=1; i<=proby; i++)
    {
        int k;
        int *tab=NULL;

        cin>>k;
        tab=new int[k];

        for(int i=0; i<k; i++)
        {
            cin>>tab[i];
        }
        for(int j=1; j<k; j++)
        {
            cout<<tab[j]<<" ";
        }
        for (int m=0; m<1; m++)
        {
            cout<<tab[m]<<" ";
        }
        delete [] tab;
        cout<<endl;
    }

    return 0;
}
