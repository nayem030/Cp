#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
           int n;
           cin>>n;
           string s;
           cin>>s;
           int ans=n;
           int l=0,r=n-1;
           while(l<r && s[l]!=s[r])
           {
               ans-=2;
               l++;
               r--;
           }
           cout<<ans<<endl;
    }
    return 0;
}

