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
	    int curr=0;
	    sort(ar,ar+n);
	    for(int i=n/2;i>=0;i--){
             if(ar[i]!=ar[n/2]){
                 curr=i+1;
                 break;
             }
         }
        cout<<n-curr<<endl;
	}
	return 0;
}
