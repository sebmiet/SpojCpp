#include <iostream>

using namespace std;
int n, nsilnia=1, tst;
int main()
{

    cin>>tst;
    for(int i=1; i<=tst; i++)
    {
        cin>>n;
        while (n>1) nsilnia*=n--;
        /*for(int s=n; s>1 ;s--) nsilnia*=s;*/
        cout<<nsilnia/10<<" "<<nsilnia%10<<endl;
    }

    return 0;
}
