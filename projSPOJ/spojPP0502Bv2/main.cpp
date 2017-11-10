#include <iostream>

using namespace std;
int a,b,c=0,d,tab[100];
int main()
{
    cin>>a;
    while(a>0)
    {
        cin>>b;
        while(b>c)
        {
            cin>>d;
            tab[c]=d;
            c++;
        }
        c--;
        cout<<endl;
        while(c>=0)
        {
            cout<<tab[c]<<" ";
            c--;
        }
        cout<<endl;
        c=0;
        a--;
    }
    return 0;
}
