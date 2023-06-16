#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ball=0;
        for(int i=0; i<s.size(); i++)
        {
            char ch=s[i];
            bool flag=true;
            int j=i;
            while(j>=0)
            {
                if(ch==s[j] && i!=j)
                {
                    flag=false;
                    break;
                }
                j--;
            }
            if(flag)
            {
                ball=ball+2;
            }
            else
            {
                ball=ball+1;
            }
        }
        cout<<ball<<endl;;
    }


}
