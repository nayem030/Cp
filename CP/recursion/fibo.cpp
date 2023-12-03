#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{

    if(n==1)
        return 0;
    if(n==2)
    {
        return 1;
    }
    int n1=fibo(n-1);
    int n2=fibo(n-2);
    return n1+n2;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}
