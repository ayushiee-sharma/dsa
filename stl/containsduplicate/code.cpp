#include<Bits/stdc++.h>
using namespace std;
    bool containsDuplicate(vector<int>& nums)
    {   
        for(auto it=nums.begin();it!=nums.end()-1;it++)
        {
          for(auto it1=it+1;it1!=nums.end();it1++)
          {
            if(*it==*it1)
            {
              return true;
            }
          }
        }
        return false;
    }
int main()
{
 vector<int>nums={1,4,8,5,4,6};
 int x=containsDuplicate(nums);
 cout<<x;
}