#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>ans;
    for(int i=a;i<=b;i++)
    {
        bool flag=true;
        int j=i;
        while(j!=0)
        {
            if(j%10==7 || j%10==4)
            {

            }
            else
            {
                flag=false;
            }
            j=j/10;
        }
        if(flag)
        {
            ans.push_back(i);
        }
    }
    if(ans.empty())
    {
        cout<<-1;
    }
    else
    {
        for(auto it : ans)
        {
            cout<<it<<" ";
        }
    }
    return 0;

}
