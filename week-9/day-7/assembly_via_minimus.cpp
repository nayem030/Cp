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
        int p=(n*(n-1))/2;
        vector<int>b(p);
        for(int i=0; i<p; i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        for(int i=0; i<p; i+=--n)cout<<b[i]<<' ';
        cout<<b[p-1]<<endl;
    }
    return 0;
}

