#include<Bits/stdc++.h>
using namespace std;
vector<int>rotate(vector<int>&vec)
{
 int first=vec[0];
 for(int i=1;i<vec.size();i++)
 {
    vec[i-1]=vec[i];
 }
 vec[vec.size()-1]=first;
 return vec;
}
int main()
{
   vector<int>vec={10,30,2,20,5,7};
   vector<int>ans=rotate(vec);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
   }
}