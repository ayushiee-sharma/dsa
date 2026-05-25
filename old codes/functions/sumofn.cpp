#include <iostream>
using namespace std;
int sum(int a)
{    
    int x=0;
    for(int i=0;i<=a;i++)
    {
        x=x+i;
    }
    return x;
}
int main()
{  int p;
     cout<<"enter a num";
    cin>>p;
    int b=sum(p);
    cout<<b;
    
}