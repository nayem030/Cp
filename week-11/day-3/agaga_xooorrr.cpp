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
         int n;
         cin>>n;
         vector<int>a(n);
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
         vector<int>p(n);
         p[0]=a[0];
         for(int i=1;i<n;i++)
         {
             p[i]=p[i-1]^a[i];
         }
         bool ans=false;
         for(int i=0;i<n-1;i++)
         {
             int a=p[i];
             int b=p[n-1]^p[i];
             if(a==b)
             {
                 ans=true;
                 break;
             }

         }
         for(int i=0;i<n-2;i++)
         {
             int a=p[i];
             for(int j=i+1;j<n-1;j++)
             {
                 int c=p[j]^p[i];
                 int b=p[n-1]^p[j];
                 if(a==b && b==c)
                 {
                     ans=true;
                     break;
                 }
             }
         }
         if(ans)
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

