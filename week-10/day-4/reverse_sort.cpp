#include<bits/stdc++.h>
using namespace std;
const int  mod=1e9+7;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int one=0,zero=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
        }
        for(int i=n-1; i>=n-one; i--)
        {
            if(s[i]=='0')
            {
                zero++;
            }
        }
        if(zero==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
            cout<<2*zero<<" ";
            for(int i=0; i<n-one; i++)
            {
                if(s[i]=='1')
                {
                    cout<<(i+1)<<" ";
                }

            }
            for(int i=n-one; i<n; i++)
            {
                if(s[i]=='0')
                {
                    cout<<(i+1)<<" ";
                }

            }
            cout<<endl;
        }
    }
    return 0;
}

