#include <iostream>

using namespace std;

int main()
{
    int proby;
    cin>>proby;
    for(int i=1; i<=proby; i++)
    {
        int osoby, cuksy;
        cin>>osoby>>cuksy;
        if(osoby==1 && cuksy>=1)cout<<"TAK"<<endl;
        else if(cuksy==0) cout<<"NIE"<<endl;
        else
        {
            int x=osoby-1;
            int y=cuksy%x;
            if(y>0) cout<<"TAK"<<endl;
            else if(y==0) cout<<"NIE"<<endl;
            else cout<<"TAK"<<endl;
        }
    }
    return 0;
}
