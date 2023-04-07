#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    sort(ar,ar+n);
	    long int min=1000000000;
	    for(int i=0;i<n-1;i++)
	    {
	        if(ar[i+1]-ar[i]<min)
	        min=ar[i+1]-ar[i];
	    }
	    cout<<min<<endl;
	}
	return 0;
}
