#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n+1,0);
        int pos=0,max_pos=0,max_index=0,neg=0,min_neg=0,min_neg_index=0,zero=0;;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
            {
                pos++;
                if(a[i]>max_pos)
                {
                    max_pos=a[i];
                    max_index=i;
                }
            }
            else if(a[i]<0)
            {
                neg++;
                if(a[i]<min_neg)
                {
                    min_neg=a[i];
                    min_neg_index=i;
                }
            }
            else
            {
                zero++;
            }

        }
    }
    return 0;
}

