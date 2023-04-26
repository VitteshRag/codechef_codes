#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d;
	    cin>>n>>d;
	    int ar[n],count=0,f=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(ar[i]>9 && ar[i]<80)
	        count++;
	    }
	    if(count%d==0)
	    f+=count/d;
	    else
	    f+=count/d +1;
	    int s=n-count;
	    if(s%d==0)
	    f+=s/d;
	    else
	    f+=s/d +1;
	    cout<<f<<endl;
	}
	return 0;
}
