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
        int n;
        cin>>n;
        int cnt=0;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a>b)cnt++;
        }
        cout<<cnt<<endl;
    }
}
