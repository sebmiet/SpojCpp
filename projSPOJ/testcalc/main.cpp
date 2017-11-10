#include <iostream>

using namespace std;

int main()
{
int proby;
cin>>proby;
for(int i=1;i<proby;i++)
{
int a,b,x=0;
string wybor;
cin>>wybor;
cin>>a>>b;

if (wybor=="+")
{
    x=a+b;
}
if (wybor=="-")
{
    x=a-b;
}
if (wybor=="*")
{
    x=a*b;
}
if (wybor=="/")
{
    x=a/b;
}
if (wybor=="%")
{
    x=a%b;
}

cout<<x<<endl;

}

return 0;
}
