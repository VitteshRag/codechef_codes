#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,count=0;
	    cin>>a>>b>>c>>d;
	    if(a+b+c<=d)
	    count=1;
	    else if(a+b<=d)
	    count=2;
	    else
	    count=3;
	    cout<<count<<endl;
	}
	return 0;
}
