#include <cstdio>
main()
{

int t;
scanf("%d",&t);
while (t--)
{
 int n,pot,a,j;
 scanf("%d%d",&a,&n);
 if (n==0)
    {j=0;
    }
 else if (n>0)
 { pot=a%10;
   if (pot==1)
     {
     j=1;
     }
   if (pot==2)
    {
    if(n%4==1)
              j=2;
    if(n%4==2)
              j=4;
    if(n%4==3)
              j=8;
    if(n%4==0)
              j=6;

    }
   if (pot==3)
    {
    if(n%4==1)
              j=3;
    if(n%4==2)
              j=9;
    if(n%4==3)
              j=7;
    if(n%4==0)
              j=1;

    }
   if (pot==4)
    {
    if(n%2==1)
              j=4;
    if(n%2==0)
              j=6;

    }
   if (pot==5)
    {
    j=5;
    }
   if (pot==6)
    {
    j=6;
    }
   if (pot==7)
    {
    if(n%4==1)
              j=7;
    if(n%4==2)
              j=9;
    if(n%4==3)
              j=3;
    if(n%4==0)
              j=1;

    }
   if (pot==8)
    {
    if(n%4==1)
              j=8;
    if(n%4==2)
              j=4;
    if(n%4==3)
              j=2;
    if(n%4==0)
              j=6;

    }
   if (pot==9)
    {
    if(n%2==1)
              j=9;
    if(n%2==0)
              j=1;

    }
   if (pot==0)
    {
    j=0;
    }
}
printf("%d\n",j);

}
return 0;
}
