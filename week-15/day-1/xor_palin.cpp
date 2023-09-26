    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    const int mod=1e9+7;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {

           ll n;
           cin>>n;
           string s;
           cin>>s;
           int diff=0;
           for(int i=0;i<n/2;i++)
           {
               if(s[i]!=s[n-1-i])
               {
                   diff++;
               }
           }
           string ans="";
           int f=0;
           for(int i=0;i<diff;i++)
           {
               ans+="0";
           }
           if(n%2!=0)
           {
               for(int i=diff;i<=(n-diff);i++)
               {
                   ans+="1";
               }
           }
           else
           {
               for(int i=diff;i<=(n-diff);i++)
               {
                  if(f%2==0)
                  {
                      ans+="1";
                  }
                  else
                  {
                      ans+="0";
                  }
                  f++;
               }
           }
           for(int i=0;i<diff;i++)
           {
               ans+="0";
           }
           cout<<ans<<endl;
        }
    }
