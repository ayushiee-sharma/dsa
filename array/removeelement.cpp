  #include <Bits/stdc++.h> 
using namespace std;
  int removeElement(vector<int>& nums, int val) {
  for(auto i=nums.begin();i<nums.end();i++)
  { if(*i==val)
    {
      nums.erase(i);
      i--;  
    }  

}
 return nums.size(); 
}
int main(){
     vector <int> nums={1,5,7,10,9};
     int val;
     cin>>val;
    cout<<removeElement(nums,val);
}