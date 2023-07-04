#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=n/3;
        int b=a;
        int c=a;
        int x=n%3;
        x=x+3;
        a--;
        b--;
        c--;
        if(x==3)
        {
            a+=2;
            b+=1;
        }
        else if(x==4)
        {
            a+=3;
            b+=1;
        }
        else if(x==5)
        {
            a+=3;
            b+=2;
        }
        cout<<b<<" "<<a<<" "<<c<<endl;
    }
}
