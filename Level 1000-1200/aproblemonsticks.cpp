/*There are N stick holders with negligible size (numbered 1 throughN)
in a row on the ground. Akbar places all the sticks in them vertically;
for each valid i, the initial height of the stick in the i-th holder is 
Ai.Birbal has a stick cutter and his task is to completely cut all these
sticks, i.e. reduce the heights of all sticks to 0. */
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
	    int i=n-1,count=0;
	    while(i>0)
	    {
	        if(ar[i]>ar[i-1])
	        {
	            count++;
	            ar[i]=ar[i-1];
	        }
	        i--;
	    }
	    if(ar[0]==0)
	    cout<<count<<endl;
	    else
	    cout<<count+1<<endl;
	}
	return 0;
}
