#include<bits/stdc++.h>
using namespace std;
   vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0; 
        int right = numbers.size() - 1;    

        while(left < right)
         {   
            int sum = numbers[left] + numbers[right];

            if(sum > target) {
                right--;
            }
            else if(sum < target) {
               left++;
            }
            else {
                return {left + 1, right + 1}; 
            }
        }

        return {};
    }
        
    

    int main()
    {
        vector<int>numbers={1,2,3,2,6,7,8,9};
        int target;
        cin>>target;
        vector<int>ans=twoSum(numbers,target);
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i];
        }
    }