#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s[n+3];
        for(int i=0; i<n; i++)cin>>s[i];
        for(int i=0; i<m; i++)
        {
            int j=n-1;
            int k=n-1;
            while(j>=0&&k>=0)
            {

                while(j>=0 && s[j][i]!='.')j--;
                k=j-1;
                while(k>=0 && s[k][i]!='*')
                {
                    if(s[k][i]=='o')
                    {
                        j=k;
                        break;
                    }
                    k--;
                }
                if(j>=0 && k>=0)swap(s[j][i],s[k][i]);
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<s[i]<<endl;
        }

    }
}
