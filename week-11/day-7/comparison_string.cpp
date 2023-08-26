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
        int n;
        cin>>n;
        string s;
        cin>>s;
       int max_size=0;
        for(int i=0;i<n;i++)
        {

            int sz=1;
            while(s[i]==s[i+1])
            {
                sz++;
                i++;

            }
            max_size=max(max_size,sz);
        }
        cout<<max_size+1<<endl;


    }
    return 0;
}
