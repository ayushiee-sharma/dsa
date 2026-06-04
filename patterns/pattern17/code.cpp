#include<iostream>
using namespace std;
void print1(int x){
  for(int i=1;i<=x;i++)
  {
   int start=65+x;
   for(int j=1;j<=i;j++)
   {
    cout<<char(start-i);
    start++;
   } 
   cout<<endl;
  }
}
int main(){
    int l;
    cin>>l;
    for(int i=0;i<=l;i++)
    {
        int x;
        cin>>x;
        print1(x);
    }
}