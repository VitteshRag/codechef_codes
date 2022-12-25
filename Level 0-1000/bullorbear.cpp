/*Chef is on his way to become the new big bull
 of the stock market but is a bit weak at
  calculating whether he made a profit or a loss on his deal.

Given that Chef bought the stock at value X
 and sold it at value YY. Help him calculate
  whether he made a profit, loss, or was it a neutral deal.*/
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
	    cout<<"LOSS"<<endl;
	    else if(a==b)
	    cout<<"NEUTRAL"<<endl;
	    else 
	    cout<<"PROFIT"<<endl;
	}
	return 0;
}
