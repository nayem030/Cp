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
        long long int a,b,res;
        cin>>a>>b;
        for(int i=2; i<=a; i++)
        {
            if(a%i==0)
            {
                res=i;
                break;
            }
        }
        a+=res;
        b-=a;
        cout<<(b/2)+(b%2)+1<<endl;
    }
    return 0;
}

