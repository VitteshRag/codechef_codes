/*Given a string consisting of '>','<','*'. 
Find the number of occurances of '><', after you change every 
'<' to '>' and vice versa.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.size();
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='<')
	        s[i]='>';
	        else if(s[i]=='>')
	        s[i]='<';
	        else if(s[i]=='*')
	        s[i]=='*';
	    }
	    int count=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(s[i]=='>' && s[i+1]=='<')
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
