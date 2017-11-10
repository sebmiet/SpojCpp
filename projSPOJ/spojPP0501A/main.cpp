#include <iostream>

using namespace std;

int nwd(int a,int b)
{
    int c;
    while(b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main()
{
    int proby, a, b;
    cin>>proby;
    for(int i=1; i<=proby; i++)
    {
        cin>>a>>b;
        cout<<nwd(a,b)<<endl;

    }

    return 0;
}
