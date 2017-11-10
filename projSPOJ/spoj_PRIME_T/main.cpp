#include <iostream>

using namespace std;

bool isprime (int n)
{
    if(n<2) return false;

    for (int i=2; i<n; i++)
        if (n%i==0) return false;
    return true;
}
int main()
{
    int test, n;
    cin>>test;
    for (int i=1; i<=test; i++)
    {
            cin>>n;
            if(isprime(n)) cout<<"TAK"<<endl;
            else cout<<"NIE"<<endl;
    }

    return 0;
}
