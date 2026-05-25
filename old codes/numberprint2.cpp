#include <iostream>
using namespace std;
int main()
{   int b=0;
    int a=3;
    for(int i=1;i<=a;i++)
    {
        for(int x=1;x<=i;x++)
        {   
            b++;
            cout<<b;
        }
        cout<<"\n";
    }

}