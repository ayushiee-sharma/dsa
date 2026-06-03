#include<iostream>
using namespace std;
void print1(int x){
    for(int i=1;i<=x;i++)
    {   
     int p=i;
     for(int j=1;j<=i;j++)
     {
        cout<<j;
     }
     for(int j=1;j<=2*(x-i);j++)
     {
        cout<<" ";
     }
     for(int j=1;j<=i;j++)
     {  
        cout<<p;
        p--;
     }
     cout<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;n++)
    {
        int x;
        cin>>x;
        print1(x);
    }
}