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
	    if(a>=b)
	    cout<<"PIZZA"<<endl;
	    else if(a>=c)
	    cout<<"BURGER"<<endl;
	    else
	    cout<<"NOTHING"<<endl;
	}
	return 0;
}
