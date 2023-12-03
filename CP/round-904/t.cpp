#include <bits/stdc++.h>

using namespace std;

#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define ff     first
#define ss     second
#define pb     push_back

int main()
{
    _test
    {
        int n, m;
        cin>>n>>m;

        int ans = 0;

        vector<pair<int, int>> vp(n);
        for(auto &[l, r]: vp)       cin>>l>>r;

        sort(vp.begin(), vp.end());

        map<int, int> en;
        int ongoing = 0;

        set<int> cl;

        for(int i=0; i<n; i++)
        {
            if(vp[i].ff == 1)
                continue;

            while(cl.size() && *cl.begin() <= vp[i].ff)
            {
                ongoing -= en[*cl.begin()];
                cl.erase(cl.begin());
            }

            ongoing++;
            en[vp[i].ss+1]++;
            cl.insert(vp[i].ss+1);

            ans = max(ans, ongoing);
        }

        cl.clear();
        ongoing = 0;
        en.clear();

        sort(vp.begin(), vp.end(), [&](pair<int,int>i,pair<int,int>j)
        {
            if(i.ss!=j.ss)    return i.ss<j.ss;
            return                   i.ff<j.ff;
        });

        for(int i=n-1; i>=0; i--)
        {
            if(vp[i].ss == m)
                continue;

            while(cl.size() && *cl.rbegin() >= vp[i].ss)
            {
                ongoing -= en[*cl.rbegin()];
                cl.erase(--cl.end());
            }

            ongoing++;
            en[vp[i].ff-1]++;
            cl.insert(vp[i].ff-1);

            ans = max(ans, ongoing);
        }

        cout<<ans<<"\n";
    }
}
