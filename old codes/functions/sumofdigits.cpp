#include <iostream>
using namespace std;
int fun()
{   
    int x;
    cout<<"enter the number";
    cin>>x;
    int y=0;
    while(x!=0){
        int a=x%10;
        int b=a;
        y=b+y;
        x=x/10;
    }
    cout<<y;
}
int main()
{
    fun();
}