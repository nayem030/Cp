#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        auto it=upper_bound(a.begin(),a.end(),x);
        int index=it-a.begin();
        cout<<index<<endl;
    }
    return 0;
}
