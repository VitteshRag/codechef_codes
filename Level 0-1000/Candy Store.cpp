#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a>=b)
	    cout<<b<<endl;
	    else
	    cout<<a+2*(b-a)<<endl;
	}
	return 0;
}
