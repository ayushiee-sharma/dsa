#include <Bits/stdc++.h> 
using namespace std;
    int water(vector<int>& height)
  {
       int left=0;
       int leftmax=0;
       int right=height.size()-1;
       int rightmax=0;
       int stored=0;
    
       while(left<right)
       {
     if(height[left]<=height[right])
         {
           if(height[left]>=leftmax)
           {
             leftmax=height[left];
             left++;
           }
           else
           {
           stored=stored+(leftmax-height[left]);
           left++;
           }

         }
     else if(height[left]>height[right])
         {
           if(height[right]>=rightmax)
           {
             rightmax=height[right];
             right--;
           }
           else
           {
           stored=stored+(rightmax-height[right]);
           right--;
           }

         }
    }
    return stored;

  };
  int main()
  {
    vector <int> height={1,3,4,6,2,4};
    cout<<water(height);
  }