#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int l=0,r=0;
    deque<int>li;
    while(r<n)
    {
        li.push_back(ar[r]);
        if(r<k-1)
        {
            r++;
        }
        else
        {
            cout<<*max_element(li.begin(),li.end())<<" ";
            li.pop_front();
            l++;
            r++;

        }
    }
}
