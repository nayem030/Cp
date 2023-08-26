#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
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
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<int>ans;
        bool sort_break=false;
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                cout<<1;
                ans.push_back(a[i]);
                continue;
            }
            if(sort_break)
            {

                if(a[i]<ans.back())
                {
                    cout<<0;
                }
                else
                {
                    if(a[i]>ans[0])
                    {
                        cout<<0;
                    }
                    else
                    {
                        cout<<1;
                        ans.push_back(a[i]);
                    }
                }
            }
            else
            {
                if(a[i]>=ans.back())
                {
                    cout<<1;
                    ans.push_back(a[i]);
                }
                else
                {
                    if(a[i]>ans[0])
                    {
                        cout<<0;
                    }
                    else
                    {
                        ans.push_back(a[i]);
                        sort_break=true;
                        cout<<1;
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
