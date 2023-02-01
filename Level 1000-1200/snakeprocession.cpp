/*You're given a string as input, with the letters 'H','T' or '.' .
Check if the given string is valid where H-head, T-Tail.
A given string is only valid if the head is followed by the tail.
The string must also start with a head. 
Valid string -> H...T..H..T.HT
Invalid string-> HTHHT  or T..H.T  or H..H...T..T

*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int h=0,flag=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='H')
	        h++;
	        else if(s[i]=='T')
	        h--;
	        else
	        h=h;
	        if(h<0 || h>1)
	        flag=1;
	    }
        if(flag==0 && h==0)
        cout<<"Valid"<<endl;
        else
        cout<<"Invalid"<<endl;
	}
	return 0;
}
