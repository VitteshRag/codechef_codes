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
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    sort(ar,ar+n);
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(ar[i]==0)
	        {
	            count++;
	        }
	        else if(ar[i]<i+1 && ar[i]!=0)
	        {
	            count++;
	        }
	        else
	        break;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
