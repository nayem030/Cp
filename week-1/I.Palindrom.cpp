#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int m=n;
  int p=0;
  while(n%10==0)
  {
      n=n/10;
  }
  while(n/10!=0)
  {
      p=p*10+(n%10);
      n=n/10;

  }
  p=p*10+n;
  cout<<p<<'\n';
  if(m==p)
  {
      cout<<"YES";
  }
  else
  {
      cout<<"NO";
  }
  return 0;

}
