#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
    int a,b;
    cin>>a>>b;
    int c=a*b;
	if(c>=10000 && c<=99999)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}
	}

	return 0;
}

