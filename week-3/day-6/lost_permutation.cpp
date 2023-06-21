#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int>ar(n);
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];

        }
        int mx=*max_element(ar.begin(),ar.end());
        vector<bool>bl(1111,false);
        for(int i=0; i<n; i++)
        {
            bl[ar[i]]=true;
        }
        int sum=0;
        bool ok=false;
        int curr=1;
        while(true)
        {
            if(bl[curr])
            {
                curr++;
                continue;
            }
            sum+=curr;
            bl[curr]=true;
            if(sum==s)
            {
                bool im=false;
                for(int i=curr; i<=mx; i++)
                {
                    if(!bl[i])
                    {
                        im=true;
                        break;
                    }

                }
                if(!im)
                {
                    ok=true;
                }
                break;

            }
            curr++;
            if(sum>s)break;
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
    return 0;
}
