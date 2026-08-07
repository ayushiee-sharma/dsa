#include<iostream>
using namespace std;
int checkgcd(int x,int y){

 while(y!=0)
 {
    int rem=x%y;
    x=y;
    y=rem;
   
 }
 return x;
    
}
int main()
{
    long long x,y;
    cin>>x;
    cin>>y;
    int res=checkgcd(x,y);
    cout<<(x*y)/res;
}