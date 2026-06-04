#include<iostream>
using namespace std;
void print1(int x){
  int start=65;
  for(int i=1;i<=x;i++)
  { 
    for(int j=1;j<=i;j++)
    {
        cout<<char(start);
    }
    cout<<endl;
    start++;
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