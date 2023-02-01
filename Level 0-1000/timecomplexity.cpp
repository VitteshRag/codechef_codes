/*A sorting algorithm A is said to have more time
 complexity than a sorting algorithm BB if it uses
 more number of comparisons for sorting the same array than algorithm B.
Given that algorithm A uses XX comparisons to sort an array and
 algorithm BB uses Y comparisons to sort the same array,
  find whether algorithm AA has more time complexity.*/
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
	    if(a>b)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
