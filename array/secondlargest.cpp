#include<Bits/stdc++.h>
using namespace std;
int secondlar(vector <int>&vec)
{
 int largest=vec[0];
 int secondlargest=INT_MIN;
 for(int i=1;i<vec.size();i++)
 {
    if(vec[i]>largest)
    {   secondlargest=largest;
        largest=vec[i];
    }
    else if(vec[i]>secondlargest)
    {   if(vec[i]!=largest)
        secondlargest=vec[i];
    }
    else{
        continue;
    }
 }
 return secondlargest;
}
int main()
{
    vector<int>vec={1,3,5,5,2,2,3};
    cout<<secondlar(vec);
}