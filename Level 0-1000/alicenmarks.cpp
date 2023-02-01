/*Alice has scored XX marks in her test and Bob has scored Y
 marks in the same test. Alice is happy if she scored at least
 twice the marks of Bob’s score. Determine whether she is happy or not.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	cin>>x>>y;
	if(x>=2*y)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
}
