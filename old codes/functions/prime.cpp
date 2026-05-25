#include <iostream>
using namespace std;
void func()
{
    int n;
    int a=0;
    cout<<"enter a number";
    cin>>n; 
        for(int y=2;y<=n/2;y++)
        {
            if(n%y==0)
            {
                a++;
                break;
            }
        }
        (a==0) ? cout<<"Prime" : cout<<"Not Prime";
    }

int main()
{
    func();
}

