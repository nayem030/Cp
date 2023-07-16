#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        vector<int>ans;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int sc=0;
        for(int i=1; i<n; i++)
        {
            if(a[i]!=a[i-1])
            {
                sc++;
            }
        }
        if(sc==0)
        {
            for(int i=0; i<n; i++)
            {
                if(a[i]==1)
                {
                    cout<<0<<" ";
                }
                else
                {
                    cout<<1<<" ";
                }
            }
        }
        else
        {
            int i=0;
            if(a[i]==1)
            {
                ans.push_back(0);
            }
            i++;
            while(sc!=0 && i<n)
            {
                if(ans[i-1]==1)
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(1);
                }
                sc--;
                i++;
            }
            for(int j=i; j<n; j++)
            {
                if(ans[j-1]==1)
                {
                    ans.push_back(1);
                }
                else
                {
                    ans.push_back(0);
                }
            }
            for(auto it:ans)
            {
                cout<<it<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}
