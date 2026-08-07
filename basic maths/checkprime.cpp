#include<iostream>
using namespace std;
bool checkprime(int x){
    if(x<=1)
    {
        return false;
    }
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int x;
    cin>>x;
    bool res=checkprime(x);
    if(res==true){
        cout<<"prime number";
    }
    else cout<<"not prime number";
}