#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
bool valid_matrix(vector<string>a,int n,int m)
{
    bool valid=true;
    for(int i=0;i<n;i++)
    {
        string s=a[i];
        int c=0;
        for(int j=0;j<m;j++)
        {
            if(s[j]=='D' || s[j]=='U')
            {
                c++;
            }
        }
        if(c%2==1)
        {
            valid=false;
        }
    }
    for(int i=0;i<m;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i]=='R' || a[j][i]=='L')
            {
                c++;
            }
        }
        if(c%2==1)
        {
            valid=false;
        }
    }
    return valid;
}
vector<vector<char>> print(vector<string>a,int n,int m)
{
    vector<vector<char>>matrix(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        string s=a[i];
        int c=0;
        for(int j=0;j<m;j++)
        {
            if(s[j]=='U')
            {
                if(c%2==0)
                {
                    matrix[i][j]='W';
                    matrix[i+1][j]='B';

                }
                else
                {
                    matrix[i][j]='B';
                    matrix[i+1][j]='W';
                }
                c++;
            }
            if(s[j]=='.')
            {
                matrix[i][j]='.';
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i]=='L')
            {
                if(c%2==0)
                {
                    matrix[j][i]='W';
                    matrix[j][i+1]='B';
                }
                else
                {
                    matrix[j][i]='B';
                    matrix[j][i+1]='W';
                }
                c++;
            }
        }
    }
    return matrix;
}
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
        vector<string>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool valid=valid_matrix(a,n,m);
        if(!valid)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<vector<char>> ans=print(a,n,m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<ans[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
