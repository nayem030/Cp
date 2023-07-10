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
        int n1=n/k;
        int n2=n%k;
        int sum=0;
        sum=n-n2;
        sum+=min(n2,k/2);
        cout<<sum<<endl;

    }
}
