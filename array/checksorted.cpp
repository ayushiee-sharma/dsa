#include <Bits/stdc++.h> 
using namespace std;
bool sorted(vector<int>&vec){
   for(int i=0;i<vec.size()-1;i++)
   {
    if(vec[i]>vec[i+1]) return false;
   }
   return true;
}
int main()
{
   vector <int> vec={1,5,7,10,9};
    cout<<sorted(vec);
}
