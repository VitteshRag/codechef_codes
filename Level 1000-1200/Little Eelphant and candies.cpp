#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c;
	    cin>>n>>c;
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[n];
	        c-=ar[n];
	    }
	    if(c>=0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	    
	}
	return 0;
}

