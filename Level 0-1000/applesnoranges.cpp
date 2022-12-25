/*Bob has X rupees and goes to a market.
 The cost of apples is Rs. A per kg and the cost of oranges is Rs. B per kg.
Determine whether he can buy at least 11 kg each of apples and oranges.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,a,b;
	cin>>x>>a>>b;
	if(x>=a+b)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
}
