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
	    n*=2;
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    sort(ar,ar+n);int f=0;
	    for(int i=1;i<n-1;i++)
	    {
	        if(ar[i-1]==ar[i] && ar[i]==ar[i+1])
	        f=1;
	    }
	    if(f==0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
