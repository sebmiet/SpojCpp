#include <iostream>

using namespace std;


int lookup[10][4] = {
    0,0,0,0,
    1,1,1,1,
    6,2,4,8,
    1,3,9,7,
    6,4,6,4,
    5,5,5,5,
    6,6,6,6,
    1,7,9,3,
    6,8,4,2,
    1,9,1,9
    };

int clc(int a, int n) {
    return lookup[a%10][n%4];
    }
int main()
{
    int tst;
    int a,b;
    cin>>tst;
    for(int i=0;i<tst;i++)
    {

    cin>>a>>b;

    cout << clc(a,b)<< endl;

    }
    return 0;
}
