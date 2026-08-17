#include <Bits/stdc++.h> 
using namespace std;
    int removeDuplicates(vector<int>& nums) {
        int slow=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[slow])
            {
                slow++;
                nums[slow]=nums[i];
            }
        }
        return slow+1;
    }
int main()
{
   vector <int> nums={1,5,10,9};
    cout<<removeDuplicates(nums);
}
