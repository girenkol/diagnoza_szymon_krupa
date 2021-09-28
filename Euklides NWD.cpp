#include <iostream>
#include <windows.h>

using namespace std;

int euklides(int a,int b);
int main ()
{
    int a;
    int b;
    int NWD;
   cout<<"Podaj a: ";
   cin>>a;
   system("cls");
   cout<<"Podaj b: ";
   cin>>b;
   system("cls");
    if(a<b)
    {
        NWD=euklides(b,a);
    }
    else
    {
        NWD=euklides(a,b);
    }
   cout<<"NWD dla "<<a<<" i "<<b<<" wynosi: "<<NWD;
}

int euklides(int a,int b)
{
    while(a!=b)
    {
       a=a-b;
    }
    return a;
}
