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
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(long long i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long ans = 0;
        for(long long i=30; i>=0; i--)
        {
            long long  cnt = 0;
            for(long long j=0; j<n; j++)
            {
                if(a[j]>=pow(2,i) and a[j]<pow(2,(i+1)))
                    ++cnt;
            }
            ans+= (cnt*(cnt-1))/2;
        }
        cout<<ans<<endl;
    }


    return 0;
}
