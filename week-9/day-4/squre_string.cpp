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
        string s;
        cin>>s;
        int n=s.size();
        if(n&1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int i=0;
        int j=n/2;
        bool f=true;
        while(j<n && i<n/2)
        {
            if(s[i]!=s[j])
            {
                f=false;
                break;
            }
            i++;
            j++;
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

