#include <iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=1;i<=n;i++)
    {
        for(int x=1;x<=i;x++)
        {
            cout<<"*";
        }
        
        if(i<4)
            {
            for(int x=1;x<=2*(n-i);x++)
            {
                cout<<" ";
            }
             }
        
        for(int x=1;x<=i;x++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for(int i=1;i<=n;i++)
    {
        for(int x=0;x<=n-i;x++)
        {
            cout<<"*";
        }
        if(i!=1)
        {
            for(int x=1;x<=2*(n+i-5);x++)
            {
                cout<<" ";
            }
        }
        for(int x=0;x<=n-i;x++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}