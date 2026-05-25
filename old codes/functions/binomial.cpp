#include <iostream>
using namespace std;
void func()
{   
    int n,r;
    int a=1;
    int b=1;
    int c=1;
    cout<<"enter value of n";
    cin>>n;
    cout<<"enter value of r";
    cin>>r;
    for(int i=n;i>n-r;i--)
    {
        a=a*i;
    }
    for(int i=1;i<=r;i++)
    {
        b=b*i;
    }
    // for(int i=1;i<=n-r;i++)  (can also be usec)
    // {
    //     c=c*i;
    // }
    cout<<"answer is"<<a/b;

}
int main()
{
    func();
}