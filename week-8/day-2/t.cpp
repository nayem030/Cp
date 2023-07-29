#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;
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
         vector<long long >a(n);
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
         pbds<long long>s;
         long long ans=0;
         for(int i=0;i<n;i++)
         {
             long long k=s.order_of_key(a[i]);
             ans=ans+(s.size()-k);
             s.insert(a[i]);
         }
         cout<<ans<<endl;
    }
    return 0;
}

