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
        long long n;
        cin>>n;
        int ans=0;
        for(long long i=1;i<=10000;i++)
        {
            if(n%i==0)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

