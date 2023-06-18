#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>9 && b>9 && c>9 && a+b+c>99)
	    	        cout<<"PASS"<<endl;
	    else
	    cout<<"FAIL"<<endl;
	}
	return 0;
}
