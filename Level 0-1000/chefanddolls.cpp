/*Chef is fan of pairs and he likes all
 things that come in pairs. He even has
 a doll collection in which the dolls come
 in pairs. One day while going through his
 collection he found that there are odd number
 of dolls. Someone had stolen a doll!

Help chef find which type of doll is missing..*/
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
	    for(int i=0;i<n;i+=2)
	    {
	        if(ar[i]!=ar[i+1])
	        {
	            cout<<ar[i]<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
