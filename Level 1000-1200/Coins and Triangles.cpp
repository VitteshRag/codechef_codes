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
	    int sum=0,c=1,count=0;
	    while(sum<=n)
	    {
	        sum+=c;
	        c++;
	        count++;
	    }
	    cout<<count-1<<endl;
	}
	return 0;
}