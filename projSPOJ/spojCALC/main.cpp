#include <iostream>

using namespace std;

int main()
{
    string dzialanie;
    int a, b, wynik;
    while(cin>>dzialanie>>a>>b)
    {
        if(dzialanie=="+")
        {
            wynik=a+b;
        }
        else if(dzialanie=="-")
        {
            wynik=a-b;
        }
        else if(dzialanie=="*")
        {
            wynik=a*b;
        }
        else if(dzialanie=="/")
        {
            wynik=a/b;
        }
        else if(dzialanie=="%")
        {
            wynik=a%b;
        }
        cout<<wynik<<endl;
    }
    return 0;
}
