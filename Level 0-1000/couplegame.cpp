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
	    cout<<max(a,b)-min(a,b)<<endl;
	}
	return 0;
}
