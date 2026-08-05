#include<iostream>
#include<vector>
using namespace std;
int printdivisor(int n){
    vector<int>small;
    vector<int>large;
    for(int i=1;i*i<=n;i++)
    {   
        if(n%i==0)
        {  
          int q=n/i;
          small.push_back(i);
          
          if(q!=i)
          {
            large.push_back(q);
          }
        }
    }
    for(int x:small)
    {
        cout<<x<<endl;
    }
    int t = large.size()-1;
    for(int i=t;i>=0;i--)
    {
        cout<<large[i]<<endl;
    }
}
int main(){
    int x;
    cin>>x;
    printdivisor(x);
}