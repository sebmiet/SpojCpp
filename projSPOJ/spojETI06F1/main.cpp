#include <iostream>

using namespace std;
double pi=3.141592654, p, r, d;
int main()
{
    cin>>r>>d;
    p=((r*r)-((d*d)/4))*pi;
    cout <<fixed<<p<< endl;
    return 0;
}
