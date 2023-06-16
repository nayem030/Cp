#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int ,int>mp;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        mp[in]++;
    }
    for(auto it:mp)
    {
        if(it.second==1)
        {
            cout<<it.first;
        }
    }
    return 0;
}
