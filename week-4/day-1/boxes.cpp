#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long int>a(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int maxbit =0;
        long long int b=1;
        for(auto it:a)
        {
            for(long long int i=0;i<61;i++)
            {
                 if(((b<<i)&it)>0)
                {
                    maxbit=max(maxbit,i);
                }
            }
        }
        long long  cnt=0;
        for(auto it : a)
        {
             cnt +=(((b<<maxbit) & it) > 0);
        }
        cout<<(cnt + 1)/2<<"\n";

    }
}
