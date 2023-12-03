#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    sort(a.begin(),a.end());
    vector<int>ans;
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        auto it=upper_bound(a.begin(),a.end(),r);
        auto it1=lower_bound(a.begin(),a.end(),l);
        int index1=it1-a.begin();
        int index=it-a.begin();
        ans.push_back(index-index1);

    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;
}
