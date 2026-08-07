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
    int x;
    int y;
    cin>>x;
    cin>>y;
    int res=checkgcd(x,y);
    cout<<res;
}