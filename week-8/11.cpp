#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>ans;
        int i=0,j=n-1;
        while(i<=j)
        {
            if(i==j)
            {
                ans.push_back(a[i]);
                i++;
                j--;
                continue;
            }
            ans.push_back(a[i]);
            ans.push_back(a[j]);
            i++;
            j--;
        }
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}

