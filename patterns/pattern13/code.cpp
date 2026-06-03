#include<iostream>
using namespace std;
void print1(int x){
  for(int i=1;i<=x;i++)
  { 
  int n=65;
  for(int j=1;j<=i;j++)
  {
    cout<<char(n);
    n++;
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