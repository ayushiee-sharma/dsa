#include<bits/stdc++.h>
using namespace std;
vector <int>sortColors(vector<int>&nums)
{
    int low=0;
        int mid=0;
        int high=nums.size()-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid]==2)
        {
            swap(nums[mid],nums[high]);
            high--;
        }
        else mid++;
    }   
    return nums;   

}
int main()
{
   vector<int>nums={1,2,0,0,2,1,1,0};
   vector<int>ans=sortColors(nums);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
}