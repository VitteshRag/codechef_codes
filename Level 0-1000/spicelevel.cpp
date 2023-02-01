/*Each item in Chef’s menu is assigned a spice level from 11 to 1010. Based on the spice level, the item is categorised as:

MILD: If the spice level is less than 4.
MEDIUM: If the spice level is greater than equal to 4 but less than 7.
HOT: If the spice level is greater than equal to 7.*/
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
	    if(n<4)
	    cout<<"MILD"<<endl;
	    else if(n>=7)
	    cout<<"HOT"<<endl;
	    else
	    cout<<"MEDIUM"<<endl;
	}
	return 0;
}
