#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        if(n==2 || n%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        vector<int>even;
        vector<int>odd;
        for(int i=1; i<=n/2; i++)
        {
            even.push_back((2*i));
        }
        for(int i=1; i<n/2; i++)
        {
            odd.push_back(2*i-1);
        }
        odd.push_back((2*(n/2)-1)+n/2);
        if(odd[n/2-1]%2==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            for(auto it:even)
            {
                cout<<it<<" ";
            }
            for(auto it:odd)
            {
                cout<<it<<" ";
            }
        }

        cout<<endl;
    }
}
