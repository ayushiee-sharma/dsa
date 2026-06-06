#include<Bits/stdc++.h>
using namespace std;
    vector<int> twoSum(vector<int>& nums, int target)
    {    
        map<int,int>seen;
        for(int i=0;i<nums.size();i++)
        {
           auto it=seen.find(target-nums[i]);
           if(it!=seen.end())
           {
             vector<int>result;
             result.push_back(it->second);
             result.push_back(i);
             return result;
           }
           seen.insert({nums[i],i});
        }
        return {};
    }
int main()
{
 int target=6;
 vector<int>nums={3,2,4};
 vector<int>res=twoSum(nums,target);
 for(auto it=res.begin();it!=res.end();it++)
 {
    cout<<*it<<" ";
 }
}