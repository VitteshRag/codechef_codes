#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,uj;
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    cin>>k;
	    uj=ar[k-1];
	    sort(ar,ar+n);
	    int temp=0;
	    for(int i=0;i<n;i++)
	    {
	        if(ar[i]==uj)
	        {
	        cout<<i+1<<endl;
	        break;
	        }
	    }
	    
	}
	return 0;
}
