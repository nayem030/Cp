#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<int>ans;
        int head=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=head)
            {
                ans.push_back(b[i]-a[i]);
            }
            else
            {
                ans.push_back(b[i]-head);
            }
            head=b[i];
        }
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
