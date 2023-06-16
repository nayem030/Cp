#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    int tr=n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>ans;
    int i=0;j=0;
    bool tr=true;
    while(i<n)
    {
        int minimum=a[i];
        int j=i;
        while(k--)
        {
            minimum=min(minimum,a[j]);
            j++;
        }
        i=i+3;
    }
}
