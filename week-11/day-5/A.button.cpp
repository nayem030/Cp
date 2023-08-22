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
        ll a,b,c;
        cin>>a>>b>>c;
        a=a+c-c/2;
        b=b+c/2;
        if(a>b)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}

