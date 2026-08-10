#include<Bits/stdc++.h>
using namespace std;
vector<int>rotate(vector<int>&vec,int k)
{  int n=vec.size();
   k=k%n;
   int begin=0;
      for(int i=n-1;i>=0;i--)
   {
    if(i>=begin) 
    { 
     swap(vec[begin],vec[i]);
     begin++;
    }
   }

  begin=0;
  for(int i=k-1;i>=0;i--)
   {
    if(i>=begin) 
    { 
     swap(vec[begin],vec[i]);
     begin++;
    }
   }
   begin=k;
     for(int i=n-1;i>=k;i--)
   {
    if(i>=begin) 
    { 
     swap(vec[begin],vec[i]);
     begin++;
    }
   }
      return vec;
 
}
int main()
{
   vector<int>vec={1,2,3,4,5,6,7};
   int k;
   cin>>k;
   vector<int>ans=rotate(vec,k);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
   }
}