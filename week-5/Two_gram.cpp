#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>mp;
    int i=0;
    while(i<n-1)
    {
        string t="";
        t+=s[i];
        t+=s[i+1];
        mp[t]++;
        i++;

    }
    string ans="";
    int mx=INT_MIN;
    for(auto it:mp)
    {

        if(it.second>mx)
        {

            ans=it.first;
            mx=it.second;
        }
    }
    cout<<ans;
}
