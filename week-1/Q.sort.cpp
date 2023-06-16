#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int frq[27]={0};
    for(int i=0;i<n;i++)
    {
      char ch;
      cin>>ch;
      frq[(ch-'a')+1]++;
    }
    for(int i=1;i<27;i++)
    {
        char ch=96+i;
        for(int j=1;j<=frq[i];j++)
        {
            cout<<ch;
        }
    }
    return 0;

}

