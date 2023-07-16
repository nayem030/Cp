#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        int odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if((n%2==0 && odd) || (n%2!=0 && odd>1))
        {
            cout<<0<<endl;
        }
        else
        {
           if(n%2!=0 && odd==1 && even==0)
           {
               cout<<2<<endl;
           }
           else if(n%2==0 && odd==0)
           {
               cout<<1<<endl;
           }
           else
           {
               cout<<1<<endl;
           }
        }
    }
    return 0;
}
