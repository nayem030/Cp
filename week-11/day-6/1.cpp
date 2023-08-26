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
        int n,m;
        cin>>n>>m;
        char a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        set<char>st;
        int i=0;
        while(i<n)
        {
            for(int j=0;j<m;j++)
            {
                if(st.size()==0)
               {
                   if(a[j][i]=='v')
                   {
                       st.insert(a[j][i]);
                       break;
                   }
               }
               else if(st.size()==1)
               {
                   if(a[j][i]=='i')
                   {
                       st.insert(a[j][i]);
                       break;
                   }
               }
               else if(st.size()==2)
               {
                   if(a[j][i]=='k')
                   {
                       st.insert(a[j][i]);
                       break;
                   }
               }
               else if(st.size()==3)
               {
                   if(a[j][i]=='a')
                   {
                       st.insert(a[j][i]);
                       break;
                   }
               }
            }
            i++;
        }
        for(auto it:st)
        {
            cout<<it<<" ";
        }
        if(st.size()==4)
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
