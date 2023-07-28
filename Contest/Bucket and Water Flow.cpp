#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a+(c*d)>b)
	    cout<<"overFlow"<<endl;
	    else if(a+(c*d)==b)
	    cout<<"filled"<<endl;
	    else
	    cout<<"Unfilled"<<endl;
	}
	return 0;
}
