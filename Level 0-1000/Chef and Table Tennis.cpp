#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int w=0,l=0;
	    string s;
	    cin>>s;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='0')
	        l++;
	        else
	        w++;
	    }
	    if(w>l)
	    cout<<"WIN"<<endl;
	    else
	    cout<<"LOSE"<<endl;
	}
	return 0;
}
