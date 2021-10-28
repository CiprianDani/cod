#include<iostream>
#include<math.h>
using namespace std;
void patrate(int x, int y)
{
    int suma=0,a;
    for(int i=x;i<=y;i++)
    {
        a=sqrt(i);
        if(a*a==i)
        {
            if(suma==0)
                {cout<<i;
                suma+=i;
                }
            else
                {cout<<"+"<<i;
                suma+=i;}
        }
    }
    if(suma!=0)
    cout<<"="<<suma;
    else
        cout<<"nu exista";
}
int main()
{
    int x,y;
    cin>>x>>y;
    patrate(x,y);
}
