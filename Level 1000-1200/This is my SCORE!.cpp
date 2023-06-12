#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int p[n],s[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>p[i]>>s[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(p[i]==p[j])
	            {
	                if(s[i]>s[j])
	                p[j]=9;
	                else
	                p[i]=9;
	            }
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(p[i]<9)
	        sum+=s[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
