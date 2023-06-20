#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int>ar(n);
        for(long long int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
           long long  int alies_candi=0;
           long long  int bob_candi=0;
           long long  int alies_sum=0;
           long long int bob_sum=0;
          long long   int i=0,j=n-1;
           long long  int ans=0;
            while(i<=j)
            {
                if(alies_sum>=bob_sum)
                {
                    bob_sum+=ar[j];
                    bob_candi++;
                    j--;
                }
               else
                {
                    alies_sum+=ar[i];
                    alies_candi++;
                    i++;
                }
                if(alies_sum==bob_sum)
                {
                   ans=alies_candi+bob_candi;

                }

            }
            cout<<ans<<endl;

    }
    return 0;
}
