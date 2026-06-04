#include<iostream>
using namespace std;
void print1(int x){
    for(int i=1;i<=x;i++)
    {   
        int start;
         if(i%2==0){
           start=0;
          }
          else{
          start=1;
          }
        for(int j=1;j<=i;j++)
        {
         cout<<start;
         start=1-start;

        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        int x;
        cin>>x;
        print1(x);
    }
}