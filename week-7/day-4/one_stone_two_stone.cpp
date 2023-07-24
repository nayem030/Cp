#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
            if(y&1)
            {
                cout<<"CHEF"<<endl;
            }
            else
            {
                cout<<"CHEFINA"<<endl;
            }
        }
        else if(x<y)
        {
            if(abs(x-y)>1)
            {
                cout<<"CHEFINA"<<endl;
            }
            else if(x&1)
            {
                cout<<"CHEF"<<endl;
            }
            else
            {
                cout<<"CHEFINA"<<endl;
            }

        }
        else
        {
            if(abs(x-y)>1)
            {
                cout<<"CHEF"<<endl;
            }
            else if(y&1)
            {
                cout<<"CHEF"<<endl;

            }
            else
            {
                cout<<"CHEFINA"<<endl;
            }
        }
    }
    return 0;
}
