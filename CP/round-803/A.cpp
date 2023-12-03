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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            int c=a[i];
            int x=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    x^=a[j];
                }

            }
            if(c==x)
            {
                cout<<x<<endl;
                break;
            }
        }
    }
    return 0;
}
