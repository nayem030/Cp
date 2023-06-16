#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mul=c;
    int i=1;
    while(mul<=b)
    {
        if(mul>=a)
        {
            cout<<mul;
            return 0;
        }
        i++;
        mul=mul*i;

    }
    cout<<-1;
}
