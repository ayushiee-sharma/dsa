#include <iostream>
using namespace std;
int sum(int a)
{    
    int x=1;
    for(int i=1;i<=a;i++)
    {
        x*=i;
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