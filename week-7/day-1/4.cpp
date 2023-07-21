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
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<int>ans;
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(abs(a[i]-a[i-1])>k)
            {
                ans.push_back(j+1);
                j=0;
                continue;
            }
            j++;
        }
        if(ans.size()==0)
        {
            cout<<0<<endl;
            continue;
        }
        int vl=*max_element(ans.begin(),ans.end());
        cout<<n-vl<<endl;
    }

    return 0;
}
