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
        string s;
        cin>>s;
        if(s.find('1')>s.find('3'))
        {
            cout<<31<<endl;
        }
        else
        {
            cout<<13<<endl;
        }

    }
    return 0;
}
