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
        int a,b,c;
        cin>>a>>b>>c;
        int d=abs(a-b);
        d=(d/2)+(d%2);
        if(d%c==0)
        {
            cout<<d/c<<endl;
        }
        else
        {
            cout<<d/c+1<<endl;
        }
    }
    return 0;
}

