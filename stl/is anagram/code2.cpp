#include<Bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
    if(s.size() != t.size())
    {
        return false;
    }
    unordered_map<char,int>freq;
    for(auto it=s.begin();it!=s.end();it++)
    {
     freq[*it]++;
    } 
     for(auto it=t.begin();it!=t.end();it++)
    {
     freq[*it]--;
    } 
    for(auto it=freq.begin();it!=freq.end();it++)
    {
     if(freq[it->first]!=0) return false;
    }
    return true;     
}
int main()
{
string s="anagram";
string t="nagaram";
cout<<isAnagram(s,t);
}