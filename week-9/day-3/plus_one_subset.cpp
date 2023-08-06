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
        int mx=*max_element(a.begin(),a.end());
        int mn=*min_element(a.begin(),a.end());
        cout<<mx-mn<<endl;
    }
    return 0;
}

