#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        int odd=0,even=0;
        for(auto i:m)
        {
            if(i.second%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd-1<=k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
