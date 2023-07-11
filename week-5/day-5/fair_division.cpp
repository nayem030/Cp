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
        int sum=0;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
           sum+=x;
           if(x==1)
           {
               cnt1++;
           }
           else
           {
               cnt2++;
           }

        }
       if(sum%2!=0)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           if(n%2!=0)
           {
               if((cnt1%2==0 && cnt1>0)|| (cnt2%2==0 && cnt2>0))
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
               cout<<"YES"<<endl;
           }
       }
    }
    return 0;
}
