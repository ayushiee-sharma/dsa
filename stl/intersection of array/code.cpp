#include<Bits/stdc++.h>
using namespace std;
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {   set<int>st;
        vector<int>ans;
        for(auto it=nums1.begin();it!=nums1.end();it++)
        {
            for(auto it2=nums2.begin();it2!=nums2.end();it2++)
            {
                if(*it==*it2)
                {
                  st.insert(*it);
                  break;
                }
            }
        }
        for(auto it=st.begin();it!=st.end();it++)
        {
            ans.push_back(*it);
        }
        return ans;
       
    }
int main()
{
vector <int> nums1={1,3,5,7,8};
vector <int> nums2={1,2,3,4,3};
vector<int>res=intersection(nums1,nums2);

for(auto it=res.begin();it!=res.end();it++)
{
    cout<<*it<<" ";
}
}