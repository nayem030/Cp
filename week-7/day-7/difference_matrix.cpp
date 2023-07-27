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
        int odd=1,even=2;
        int m=pow(n,2);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(odd<=m)
                {
                    cout<<odd<<" ";
                    odd+=2;
                }
                else if(odd>m && even<=m)
                {
                    cout<<even<<" ";
                    even+=2;
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}

