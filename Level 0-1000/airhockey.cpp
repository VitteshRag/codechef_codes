/*Alice is playing Air Hockey with Bob.
The first person to earn seven points wins the match.
Currently, Alice's score is AA and Bob's score is B.
Charlie is eagerly waiting for his turn. Help Charlie
by calculating the minimum number of points that will
be further scored in the match before it ends.*/
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
	    int x=max(a,b);
	    if(x>=7)
	    cout<<0<<endl;
	    else
	    cout<<7-x<<endl;
	}
	return 0;
}
