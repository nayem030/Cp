#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h,m;
        cin>>n>>h>>m;
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int hh,mm;
            cin>>hh>>mm;
            int cnt=0;
            int h1=h;
            int m1=m;
            while(true)
            {
                if(h1==hh && m1==mm)
                {
                    break;
                }
                cnt++;
                m1++;
                if(m1==60)
                {
                    m1=0;
                    h1++;
                    if(h1==24)
                    {
                        h1=0;
                    }
                }
            }
            ans=min(ans,cnt);
        }
        cout<<ans/60<<" "<<ans%60<<endl;
    }
}
