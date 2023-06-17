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
       char s[9][9];
       for(int i=1;i<9;i++)
       {
        for(int j=1;j<9;j++)
        {
            cin>>s[i][j];
        }
       }
       for(int i=1;i<9;i++)
       {
        for(int j=1;j<9;j++)
        {
            if(s[i][j]=='#')
            {
                if(s[i-1][j-1]=='#' && s[i-1][j+1]=='#' && s[i+1][j-1]=='#' && s[i+1][j+1]=='#')
                {
                    cout<<i<<" "<<j;
                }
            }
        }
       }
       cout<<'\n';

    }
    return 0;
}
