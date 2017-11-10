#include <iostream>

using namespace std;

int main()
{
    int test, lgth;
    string word;
    cin>>test;
    for (int i=1; i<=test; ++i)
    {
        cin>>word;
        lgth=word.size()-1;
        for(int j=0; j<=(lgth/2); ++j)
        {
            cout<<word[j];
        }
        cout<<endl;
    }
    return 0;
}
