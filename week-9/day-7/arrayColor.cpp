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
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
           if(a[i]&1)
           {
               odd++;
           }
           else
           {
               even++;
           }
        }
        if(even==n)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(odd==2 && (n-odd)==even)
        {
            cout<<"YES"<<endl;
        }
        else if(odd>2 && (odd%2==0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


