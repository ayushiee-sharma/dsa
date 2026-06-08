#include<Bits/stdc++.h>
using namespace std;
    vector<int> twoSum(vector<int>& nums, int target)
    {   
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {  
                   vector<int>result;
                   result.push_back(i);
                   result.push_back(j);
                   return result;
                 
                }
            }
        }
        return {};
    }
int main()
{
 int target=9;
 vector<int>nums={1,3,6,8,5,6};
 vector<int>res=twoSum(nums,target);
 for(auto it=res.begin();it!=res.end();it++)
 {
    cout<<*it<<" ";
 }
}