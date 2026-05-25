#include <iostream>
using namespace std;
int fun()
{
    int n;
    
    cout<<"enter a number";
    cin>>n; 
    for(int i=2;i<=n;i++){
        int a=0;
        for(int y=2;y<=i/2;y++)
        {
            if(i%y==0)
            {
                a++;
                break;
            }
        }
        if(a==0)
            cout<<i;
}
}
int main()
{
    fun();
}