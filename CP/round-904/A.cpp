#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k;
        cin>>x>>k;
        int temp,sum;
        while(true)
        {
            temp=x;
            sum=0;
            while(temp>0)
            {
                sum+=(temp%10);
                temp/=10;
            }
            if(sum%k==0)
            {
                cout<<x<<endl;
                break;
            }
            x++;
        }
    }
    return 0;
}
