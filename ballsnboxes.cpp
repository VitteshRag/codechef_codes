/*You have NN balls and KK boxes.
 You want to divide the NN balls into KK boxes such that:
Each box contains \ge 1≥1 balls.
No two boxes contain the same number of balls.
Determine if it is possible to do so.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c=0;
	    cin>>a>>b;
	    while(b>0)
	    {
	        c+=b;
	        b--;
	    }
	    if(a>=c)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
