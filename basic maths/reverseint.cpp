#include <climits>
#include<iostream>
using namespace std;
 int reverse(int x) {
        int rev=0;
        while(x!=0)
        {
        int digit=x%10;
        x=x/10;
        if(rev>INT_MAX/10 || (rev==INT_MAX/10 && digit>7))
        {  
             return 0;   
        }
         if(rev<INT_MIN/10 || rev==INT_MIN/10 && digit<-8 )
        {
         return 0;
        }
        else{
            rev=rev*10+digit;   
        }    
    }
    cout<<rev;
}
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int x;
    cin>>x;
    reverse(x);
}
}