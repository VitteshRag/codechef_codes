#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    double sum=0;
	    cin>>n>>k;
	    double ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    sort(ar,ar+n);
	    for(int i=k;i<n-k;i++)
	    {
	        sum+=ar[i];
	    }
	    sum=sum/(n-(2*k));
	    cout<< fixed<<setprecision(6)<<sum<<endl;
	}
	return 0;
}
