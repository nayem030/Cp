#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];

    }
    int i=0,j=n-1;
    while(i<j)
    {
        cout<<ar[i]<<" "<<ar[j]<<" ";
        i++;
        j--;
    }
    if(n%2!=0)
    {
       cout<<ar[i];
    }
    return 0;

}
