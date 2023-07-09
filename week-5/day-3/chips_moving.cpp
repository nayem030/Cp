#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
       long long n;
       cin>>n;
       long long  odd=0,even=0;
       while(n--)
       {
           long long x;
           cin>>x;
           if(x%2==0)
           {
               even++;
           }
           else
           {
               odd++;
           }
       }
       cout<<min(odd,even);
}
