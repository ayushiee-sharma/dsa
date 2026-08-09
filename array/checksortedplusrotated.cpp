#include <Bits/stdc++.h> 
using namespace std;
    bool check(vector<int>& nums) {
         int brake=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1)%nums.size()])
            {
              brake++;
            } 
        }
       if(brake>1) return false;
       else return true;
    
    };
int main()
{
    vector <int> nums={4,5,7,6,1,2,3};
    cout<<check(nums);
}
