#include <Bits/stdc++.h> 
using namespace std;
    int thirdMax(vector<int>& nums)
  {
        long long largest=nums[0];
        long long secondlargest=LLONG_MIN;
        long long thirdlargest=LLONG_MIN;
        for(int i=1;i<nums.size();i++)
        {
          if(nums[i]>largest)
           {
            thirdlargest=secondlargest;
            secondlargest=largest;
            largest=nums[i];
           }
           else if(nums[i]<largest && nums[i]>secondlargest)
           {
            thirdlargest=secondlargest;
            secondlargest=nums[i];
           }
           else if(nums[i]<secondlargest && nums[i]>thirdlargest)
           {
            thirdlargest=nums[i];
           }
        }
     if(secondlargest==LLONG_MIN || thirdlargest==LLONG_MIN)
     return largest;
     else return thirdlargest;
  };
  int main()
  {
    vector <int> nums={1,3,4,6,2,4};
    cout<<thirdMax(nums);
  }