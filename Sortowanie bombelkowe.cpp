#include <iostream>
#include <windows.h>

using namespace std;

int sortowanie(int xd[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n-i; j++)
        {
            if (xd[j-1]>xd[j])
            {
                swap(xd[j-1],xd[j]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<xd[i];
    }
}

int main()
{
    int n;
    cout<<"ile liczb chcesz podac: ";
    cin>> n;
    int liczby[n];
    system("cls");
    for(int i=1; i<=n; i++)
    {
        cout<<"Podaj "<<i<<" liczbe: ";
        cin>>liczby[i-1];
        system("cls");
    }
    sortowanie(liczby, n);
}
