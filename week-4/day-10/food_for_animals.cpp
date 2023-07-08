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
       long long int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
      long long int dog =x-a;
      long long int cat=y-b;
      if(dog>0)
      {
          c=c-dog;
      }
      if(cat>0)
      {
          c=c-cat;
      }
      if(c>=0)
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
