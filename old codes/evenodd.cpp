#include <iostream>
using namespace std;
int main()
{   
    int a;
    cout<<"enter a num";
    cin>>a;
    int b=0;
    int c=0;
    for (int i=1;i<a;i++)
    {
        if(i%2==0)
        {
            b=b+i;
        }
        else{
            c=c+i;
        }
    }
    cout<<"even sum"<<b;
    cout<<"odd sum"<<c;
}