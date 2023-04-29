#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    cin>>s1>>s2;
	    int count=0;
	    for(int i=0;i<s1.size();i++)
	    {
	        if(s1[i]=='?' || s2[i]=='?')
	        count++;
	        else if(s1[i]==s2[i])
	        count++;
	        else
	        continue;
	    }
	    if(count==s1.size())
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
