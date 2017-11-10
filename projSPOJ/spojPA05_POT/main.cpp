#include <iostream>

using namespace std;
int tst, a, b;
int main()
{
    cin>>tst;
    for(int i=1; i<=tst; i++)
    {
        cin>>a>>b;
            if(a>100)
            {
            for(int i=a; a>=100; i/=a )
            {


                        a/=a;
            }
            }
            if(a>10 && a<=100)
                {
                    a=a%10;
                }


        switch (a)
         {
            case 1: cout<<"1"; break;
             case 2:
                 {
                     if(b==2 || b==6 || b==10)
                        {
                            cout<<"4"<<endl;
                        }
                     else if (b==3 || b==7)
                     {
                            cout <<"8"<<endl;
                     }
                     else if (b==4 || b==8)
                     {
                            cout <<"6"<<endl;
                     }
                     else if (b==5 || b==9)
                     {
                            cout <<"2"<<endl;
                     }
                 break;
                 }
             case 3:
                          {
                     if(b==2 || b==6 || b==10)
                        {
                            cout<<"9"<<endl;
                        }
                     else if (b==3 || b==7)
                     {
                          cout <<"7"<<endl;
                     }
                     else if (b==4 || b==8)
                     {
                         cout <<"1"<<endl;
                     }
                     else if (b==5 || b==9)
                     {
                         cout <<"3"<<endl;
                     }
                  break;
                  }
             case 4:
                 {
                     if (b==2 || b==4 || b==6 || b==8 || b==10)
                     {
                         cout<<"6"<<endl;
                     }
                     else cout<<"4"<<endl;
                     break;
                 }
             case 5: cout<<"5"; break;
             case 6: cout<<"6"; break;
             case 7:
                 {
                     {
                     if(b==2 || b==6 || b==10)
                        {
                            cout<<"9"<<endl;
                        }
                     else if (b==3 || b==7)
                     {
                          cout <<"3"<<endl;
                     }
                     else if (b==4 || b==8)
                     {
                         cout <<"1"<<endl;
                     }
                     else if (b==5 || b==9)
                     {
                         cout <<"7"<<endl;
                     }
                 break;
                 }
                 }
             case 8:
                 {
                     if(b==2 || b==6 || b==10)
                        {
                            cout<<"4"<<endl;
                        }
                     else if (b==3 || b==7)
                     {
                          cout <<"2"<<endl;
                     }
                     else if (b==4 || b==8)
                     {
                         cout <<"6"<<endl;
                     }
                     else if (b==5 || b==9)
                     {
                         cout <<"8"<<endl;
                     }
                 break;
                 }
             case 9:
                 {
                     if (b==2 || b==4 || b==6 || b==8 || b==10)
                     {
                         cout<<"1"<<endl;
                     }
                     else cout<<"9"<<endl;
                     break;
                 }
                 break;

             case 10:cout<<"0"; break;
         }

    }

    return 0;
}
