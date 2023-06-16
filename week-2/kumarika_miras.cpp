#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin>>n;
    vector<long long>a(n);
    vector<long long>b(n);
    long long sum1=0;
    long long sum2=0;
    for(long long  i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin(),b.end());
    for(long long  i=0;i<n;i++)
    {
       sum1+=a[i];
       sum2+=b[i];
    }
    cout<<sum1<<" ";

   long long k;
   cin>>k;
   while(k--)
   {
       long long t,l,m;
       cin>>t>>l>>m;
       long long sum=0;
       if(t==1)
       {
          for(long long i=0;i<l;i++)
          {
              sum1-=a[i];
          }
          for(int i=n-1;i>=m;i--)
          {
              sum1-=a[i];
          }
       }
       else
       {
           for(long long i=0;i<l;i++)
          {
              sum1-=b[i];
          }
          for(int i=n-1;i>=m;i--)
          {
              sum1-=b[i];
          }
       }
       cout<<sum<<endl;
   }

}
