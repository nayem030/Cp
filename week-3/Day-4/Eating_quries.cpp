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
        int n,q;
        cin>>n>>q;
        vector<int>ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar.begin(),ar.end(),greater<int>());
        vector<int>pre(n);
        pre[0]=ar[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+ar[i];
        }
        while(q--)
        {
            long long x;
            cin>>x;
            int index=-1;
            if(x>pre[n-1])
            {
                cout<<-1<<endl;
                continue;
            }
            else
            {
                int low=0,high=n-1;
                while(low<=high)
                {
                    int mid=(low+high)/2;
                    if(pre[mid]>=x)
                    {
                        high=mid-1;
                        index=mid;
                    }
                    else
                    {
                        low=mid+1;
                    }
                }
                cout<<index+1<<endl;
            }

        }
    }
    return 0;
}
