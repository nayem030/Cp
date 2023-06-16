#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int  n;
    cin>>n;
    multiset<long long int >ml;
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        long long int  in;
        cin>>in;
        ml.insert(in);
        sum=sum+in;

    }
    auto it=ml.begin();
    while(true)
    {
        if(sum%2==0)
        {
            cout<<sum;
            return 0;
        }
        else
        {
            long long value=*it;
            if(value%2!=0)
            {
                sum=sum-value;
            }
        }
        it++;
    }

}
