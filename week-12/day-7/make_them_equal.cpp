#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(a[0]==a[n-1])
    {
        cout<<0<<endl;
        return 0;
    }
    int cnt=0;
    for(int i=0;i<301;i++)
    {
        int d=abs(a[0]-i);
        cnt=1;
        for(int j=1;j<=n-1;j++)
        {
            if( !( a[j]+d==i or a[j]-d==i or a[j]==i )   )
            {
                 cnt=0;
                 break;
            }
        }
         if(cnt)
         {
            cout<<d<<endl;
           return 0;
         }

    }
        cout<<-1<<endl;
    return 0;
}
