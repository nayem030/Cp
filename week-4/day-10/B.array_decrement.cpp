#include<bits/stdc++.h>]
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
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
       bool f=true;
       int d=-1;
       int zero_d=-1;
       for(int i=0;i<n;i++)
       {
           if(a[i]<b[i])
           {
               f=false;
               break;
           }
          if(b[i]!=0)
          {
              if(d==-1)
              {
                  d=a[i]-b[i];
              }
              else
              {
                  if((a[i]-b[i])!=d)
                  {
                      f=false;
                      break;
                  }
              }
          }
          else
          {
              zero_d=max(zero_d,(a[i]-b[i]));
          }

       }
       if(!f)
       {
           cout<<"NO"<<endl;
           continue;
       }
       if(d==-1 || d>=zero_d)
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
