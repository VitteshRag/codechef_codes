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
	    int group=0,f=0;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='1' && f==0)
	        {
	            f=1;
	            group+=1;
	        }
	        else if(s[i]=='0')
	            f=0;
	        else
	            continue;
	    }
	    cout<<group<<endl;
	}
	return 0;
}
