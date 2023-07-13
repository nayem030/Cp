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
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        vector<int>pos(n+1,0);
        for(int i=1; i<=n; i++)
        {
            pos[a[i]]=i;
        }
        int l,r;
        if((pos[n]>min(pos[1],pos[2])) && (pos[n]<max(pos[2],pos[1])))
        {
            l=pos[1];
            r=pos[2];
        }
        else if(pos[n]<pos[1] and pos[2]>pos[1])
        {
            l=pos[1];
            r=pos[n];
        }
        else if(pos[n]<pos[2] and pos[2]<pos[1])
        {
            l=pos[2];
            r=pos[n];
        }
        else if(pos[n]>pos[2] and pos[2]>pos[1])
        {
            l=pos[2];
            r=pos[n];
        }
        else if(pos[n]>pos[1] and pos[2]<pos[1])
        {
            l=pos[1];
            r=pos[n];
        }
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}
