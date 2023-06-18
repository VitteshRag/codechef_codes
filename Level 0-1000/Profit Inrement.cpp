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
	    int x=a-b;
	    int y=a+(a/10);
	    cout<<(y-x)<<endl;
	}
	return 0;
}
