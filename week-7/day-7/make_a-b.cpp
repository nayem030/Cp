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
        vector<int>a(n);
        vector<int>b(n);
        int zero_cnt=0,one_cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                zero_cnt++;
            }
            else
            {
                one_cnt++;
            }
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        bool f=false;
        if(a[0]!=b[0] || a[n-1]!=b[n-1])
        {
            cout<<"NO"<<endl;
            continue;

        }
        for(int i=1; i<n-1; i++)
        {
            if(a[i]!=b[i] && a[i]==0 && one_cnt==0)
            {
                cout<<"NO"<<endl;
                f=true;
                break;
            }
            if(a[i]!=b[i] && a[i]==1)
            {
                cout<<"NO"<<endl;
                f=true;
                break;
            }
        }


        if(!f)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

