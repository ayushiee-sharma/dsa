#include<bits/stdc++.h>
using namespace std;
vector <int> movezeroes(vector<int>&nums)
{
    int begin=0;
    for(int i=1;i<nums.size();i++)
    {
      if(nums[begin]==0 && nums[i]!=0)
      {
        swap(nums[i],nums[begin]);
        begin++;
      }
      else if(nums[begin]!=0)
      {
        begin++;
      }
    }
    return nums;
}
int main()
{
   vector<int>nums={3,0,20,5,7,7,0,8,555,00,56657,8,0,0};
   vector<int>ans=movezeroes(nums);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
}