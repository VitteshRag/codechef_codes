/*We say that a word is hard to pronounce
if it contains 44 or more consonants in a row;
otherwise it is easy to pronounce. For example,
"apple" and "polish" are easy to pronounce, but
"schtschurowskia" is hard to pronounce.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin>>t;
	while(t--)
	{
	    int n,count=0,flag=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        s[i]=tolower(s[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	        count=0;
	        else
	        count++;
	        if(count>=4)
	        flag=1;
	    }
	    if(flag==1)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
