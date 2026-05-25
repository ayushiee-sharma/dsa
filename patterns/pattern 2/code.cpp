#include<iostream>
using namespace std;
void print1(int x)
{
 for(int i=1;i<=x;i++)
 {
    for(int j=1;j<=i;j++)
    {
        cout<<"* ";
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