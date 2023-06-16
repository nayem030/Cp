#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    multiset<int>a;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        a.insert(input);
    }
    long long int ans=0;
    while(k--)
    {
        auto last_element=a.end();
        last_element--;
        int value=*last_element;
        if(value<0)
        {
            continue;
        }
        ans+=value;
        a.erase(last_element);
    }
    cout<<ans;
    return 0;
}
