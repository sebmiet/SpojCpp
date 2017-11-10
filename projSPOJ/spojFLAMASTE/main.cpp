#include <iostream>
#include <string>
using namespace std;
int znak=0, proby;
string napis;


int main()
{
    cin>>proby;
    for(int i=1; i<=proby; i++)
    {
        cin>>napis;
        int dlugosc = napis.length();
            for(int j=0; j<=dlugosc-1; j++)
            {
                if(napis[j++]==napis[j] /*&& napis[j]==napis[j+2]*/)
                {
                    znak = 1;
                    for(int k=j+1; k<=dlugosc; k++)
                    cout<< "dziala "<<j;
                }
                else continue;
            }
           /* {
                //cout<<napis.replace(znak+1, znak-1, "znak");
            }
            else
            {
                cout<<"dupa";//cout<<napis;
            }
            }*/

    }


    return 0;
}
