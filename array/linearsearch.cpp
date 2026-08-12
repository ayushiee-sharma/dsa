#include<Bits/stdc++.h>
using namespace std;
int findtarget(vector <int>&vec,int target)
{
 for(int i=0;i<vec.size();i++)
 {
    if(vec[i]==target)
    {
        return i;
    }
 }
  return -1;
}
int main()
{
    vector<int>vec={1,3,5,5,2,2,3};
    int target;
    cin>>target;
    cout<<findtarget(vec,target);
}