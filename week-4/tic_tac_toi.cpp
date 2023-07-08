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
        vector<string>a(3);
        for(int i=0; i<3; i++)
        {
            cin>>a[i];

        }
        char c1=a[0][1];
        char c2=a[1][1];
        char c3=a[2][1];
        if(c1!='.')
        {
            if(c1==a[0][0] && c1==a[0][1])
            {
                cout<<c1<<endl;
                continue;
            }
            if(c1==c3 && c1==c2)
            {
                cout<<c1<<endl;
                continue;
            }
        }
        if(c3!='.')
        {
            if(c3==a[2][0] && c3==a[2][2])
            {
                cout<<c3<<endl;
                continue;
            }
        }
        if(c2!='.')
        {
            if(c2==a[1][0] && c2==a[1][2])
            {
                cout<<c2<<endl;
                continue;
            }
            if(c2==a[2][0] && c2==a[0][2])
            {
                cout<<c2<<endl;
                continue;
            }
            if(c2==a[0][0] && c2==a[2][2])
            {
                cout<<c2<<endl;
                continue;
            }
            if(c1==c2  && c1==c3)
            {
                cout<<c2<<endl;
                continue;
            }
        }
        cout<<"DRAW"<<endl;
    }
    return 0;
}
