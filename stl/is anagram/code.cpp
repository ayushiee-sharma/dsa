#include<Bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
    if(s.size() != t.size())
    {
        return false;
    }
    unordered_map<char,int>freq1;
    unordered_map<char,int>freq2;
    for(auto it=s.begin();it!=s.end();it++)
    {
     freq1[*it]++;
    } 
     for(auto it=t.begin();it!=t.end();it++)
    {
     freq2[*it]++;
    } 
    for(auto it=freq1.begin();it!=freq1.end();it++)
    {
     if(freq2.find(it->first)!=freq2.end())
     {  
        if(it->second!=freq2[it->first])
        {
         return false;
        }
     }
     else
     {
        return false;
     }
    }  
    return true;     
}
int main()
{
string s="Enagram";
string t="nagaram";
cout<<isAnagram(s,t);
}