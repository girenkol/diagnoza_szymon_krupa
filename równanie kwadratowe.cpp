#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int delta(int a,int b,int c)
{
    int delta=(b*b)-(4*a*c);
    return delta;
}
int miejsca_zerowe (int a,int b,int c)
{
    int x1, x2;
    int jd=delta(a, b, c);
    if (delta<0)
    {
        cout<<"ta funkcja nie ma miejsc zerowych";
    }
    else
    {
    x1=(-b+sqrt(jd))/2;
    x2=(-b-sqrt(jd))/2;
    if(x1==x2)
    {
        cout<<"ta funkcja ma jedno miejsce zerowe: "<<x1;
    }
    else
    {
       cout<<"miejsca zerowe tej funckcji to: "<<x1<<" ,"<<x2;
    }
    }
}
int main()
{
    int a, b, c;
    cout<<"Podaj wspolczynnik a: ";
    cin>>a;
    system ("cls");
    cout<<"Podaj wspolczyninik b: ";
    cin>>b;
    system("cls");
    cout<<"Podaj wspolczynnik c: ";
    cin>>c;
    system("cls");

    miejsca_zerowe(a, b, c);

}
