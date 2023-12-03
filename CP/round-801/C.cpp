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
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int mi[n][m],ma[n][m];
        mi[0][0]=ma[0][0]=a[0][0];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i>0 and j>0)
                {
                    mi[i][j]=min(mi[i-1][j],mi[i][j-1])+a[i][j];
                    ma[i][j]=max(ma[i-1][j],ma[i][j-1])+a[i][j];
                }
                else if(j>0)
                {
                    mi[i][j]=mi[i][j-1]+a[i][j];
                    ma[i][j]=ma[i][j-1]+a[i][j];
                }
                else if(i>0)
                {
                    mi[i][j]=mi[i-1][j]+a[i][j];
                    ma[i][j]=ma[i-1][j]+a[i][j];
                }
            }
        }
        if((n+m)%2==1)
        {
            if(mi[n-1][m-1]<=0 and ma[n-1][m-1]>=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
