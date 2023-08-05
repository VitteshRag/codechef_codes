#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,f=0;
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++)
	    cin>>ar[i];
	    sort(ar,ar+n);
	    for(int i=1;i<n;i++)
	    {
	        if(ar[i]-ar[i-1]>1)
	        {
	            f=1;
	            break;
	        }
	    }
	    if(f==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
