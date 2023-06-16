#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int odd=0;
    int even=0;
    int pos=0;
    int neg=0;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        if(in%2==0)
        {
            even++;
            if(in>0)
            {
                pos++;
            }
            else if(in<0)
            {
                neg++;
            }
        }
        else
        {
            odd++;
            if(in>=0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
    return 0;
}
