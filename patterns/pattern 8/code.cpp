#include<iostream>
using namespace std;
void print1(int x)
{
 for(int i=1;i<=x;i++)
 {
    for(int j=1;j<=i-1;j++)
    {
      cout<<" ";
    }
    for(int j=1;j<=2*x-2*i+1;j++)
    {
        cout<<"*";
    }
    cout<<endl;
 }
}
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n;
    cin>>n;
    print1(n);
}
}