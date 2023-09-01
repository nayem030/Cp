#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
vector<pair<char,int>> split(string s)
{
     char c=s[0];
     int cnt=1;
     vector<pair<char,int>> result;
     for(int i=1;i<=s.size();i++)
     {
         if(s[i]!=c)
         {
             result.push_back({c,cnt});
             cnt=1;
             c=s[i];
         }
         else
         {
             cnt++;
         }
     }
     return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        string t;
        cin>>s>>t;
       vector<pair<char,int>>sa,st;
       sa=split(s);
       st=split(t);
       bool f=sa.size()==st.size();
       if(f)
       {
           for(int i=0;i<sa.size();i++)
           {
               if((sa[i].first!=st[i].first) || st[i].second<sa[i].second)
               {
                   f=false;
                   break;
               }
           }
       }
       if(f)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
}
