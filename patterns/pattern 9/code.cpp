#include<iostream>
using namespace std;
void print1(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<x;i++)
    {
        for(int j=1;j<=x-i;j++)
        {
            cout<<"* ";
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