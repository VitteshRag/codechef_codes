/*Chef is given two integers A and C such that A≤C.

Chef wants to find whether there exists any
 integer B such that A,B,and C are in arithmetic progression.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,c,b=0,f=-1;
	    cin>>a>>c;
	    for(int i=a;i<=c;i++)
	    {
	        if(c-i==i-a)
	        f=i;
	    }
	    cout<<f<<endl;
	}
	return 0;
}