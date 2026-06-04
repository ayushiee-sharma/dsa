#include<iostream>
using namespace std;
void print1(int x){
  for(int i=1;i<=x;i++){
    int start=65;
    for(int j=1;j<=x-i;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {   
        cout<<char(start);
        start++;
    }
    start=65;
    for(int j=1;j<=i-1;j++)
    {
     cout<<char(start+i-2);
     start--;
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