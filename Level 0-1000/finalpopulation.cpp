/*There were initially X million
people in a town, out of which Y
million people left the town and Z
million people immigrated to this town.
Determine the final population of town in millions.*/
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
	    cout<<a-b+c<<endl;
	}
	return 0;
}
