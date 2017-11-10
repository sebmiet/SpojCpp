#include <iostream>
using namespace std;
int main()
{
        long long int a,b,c,d,e,t;
        cin>>t;//ile zestawow
        for(c=1;c<=t;c++)
        {
                cin>>b;//ile liczb
                d=0;
                for(a=1;a<=b;a++)
                {
                        cin>>e;//wpisuje liczbe(y)
                        d=d+e;
                }
                cout<<d<<"\n";
        }
        return 0;
}
