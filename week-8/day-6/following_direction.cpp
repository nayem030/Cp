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
        int l=0,r=0;
        int i=0;
        bool f=false;
        while(i<n)
        {
            if(s[i]=='R')
            {
                l++;
            }
            if(s[i]=='L')
            {
                l--;
            }
            if(s[i]=='U')
            {
                r++;
            }
            if(s[i]=='D')
            {
                r--;
            }
            if(l==1 && r==1)
            {
                f=true;
                break;
            }
            i++;
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
    return 0;
}

