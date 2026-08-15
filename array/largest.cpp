#include <Bits/stdc++.h> 
using namespace std;
int largest(vector<int>&vec){
    int largest=vec[0];
    for(int i=1;i<vec.size();i++)
    {
        if(vec[i]>largest)
        {
            largest=vec[i];
        }
    }
    return largest;
}
int main()
{
   vector <int> vec={1,5,10,9};
    cout<<largest(vec);
}
