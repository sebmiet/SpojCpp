#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int *tab=NULL;

    cin>>k>>n;
    tab=new int[k];

    for(int i=0; i<k; i++)
    {
        cin>>tab[i];
    }
    for(int j=n; j<k; j++)
    {
        cout<<tab[j]<<" ";
    }
    for (int m=0; m<n; m++)
    {
        cout<<tab[m]<<" ";
    }
    delete [] tab;
    cout<<endl;
    return 0;
}
