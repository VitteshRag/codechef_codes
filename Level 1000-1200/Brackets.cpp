#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int bal=0,maxb=0;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='(')
	        bal++;
	        else
	        bal--;
	        if(maxb<bal)
	        maxb=bal;
	    }
	    for(int i=1;i<=maxb;i++)
	    {
	        cout<<'(';
	    }
	    for(int i=1;i<=maxb;i++)
	    {
	        cout<<')';
	    }
	    cout<<endl;
	}
	return 0;
}
