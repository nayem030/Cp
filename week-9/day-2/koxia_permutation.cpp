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
        int n,k;
        cin>>n>>k;
        if(k==1)
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        else
        {
            for(int i=n,j=1;i>=j;i--,j++)
            {
                if(i==j)
                {
                    cout<<j<<" ";
                }
                else
                {
                     cout<<i<<" "<<j<<" ";
                }

            }
        }
        cout<<endl;
    }
    return 0;
}

