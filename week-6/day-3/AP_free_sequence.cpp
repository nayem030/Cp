#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
        bool ok=false;
        for(int i=0;i<n-2;i++)
        {
          for(int j=i+1;j<n-1;j++)
          {
             for(int k=j+1;k<n;k++)
             {
                 if((a[j]-a[i])==(a[k]-a[j]))
                 {
                     ok=true;
                     break;
                 }
             }
          }
        }
        if(!ok)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
