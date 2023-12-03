#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int l=0,r=0;
    vector<string>ar;
    string ans="";
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            l++;
        }
        else
        {
            r++;
        }
        ans.push_back(s[i]);
        if(l==r)
        {
            ar.push_back(ans);
            ans="";
            l=0;
            r=0;
        }
    }
    cout<<ar.size()<<endl;
    for(int i=0;i<ar.size();i++)
    {
        cout<<ar[i]<<endl;
    }
}
