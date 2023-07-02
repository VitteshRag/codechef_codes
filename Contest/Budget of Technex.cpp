#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int x=n*1000;
	    x/=10;
	    
	    cout<<x<<endl;
	}
	return 0;
}
