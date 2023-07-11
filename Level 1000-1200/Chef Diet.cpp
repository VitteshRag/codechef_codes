#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int r=0,f=0,ar;
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar;
	        if(r+ar>=k)
	        r+=ar-k;
	        else if(f==0)
	        f=i+1;
	    }
	    if(f==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO "<<f<<endl;
	}
	return 0;
}
