/*The most popular feature on snapchat is Snapchat Streak.
A streak is maintained between two people if both of them send at least one snap to each other daily.
If, on any day, either person forgets to send at least one snap, the streak breaks and the streak count is set to 0.*/
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
	    int ar1[n],ar2[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar1[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar2[i];
	    }
	    int count=0,max=0;
	    for(int i=0;i<n;i++)
	    {
	        if(ar1[i]==0 || ar2[i]==0)
	        count=0;
	        else
	        {
	        count++;
	        if(count>max)
	        max=count;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
