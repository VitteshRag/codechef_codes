#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int sum=x+y;
	    int k=sum+1;
	    while(k>sum)
	    {
	        int pc=0;
	        for(int i=2;i<k;i++)
	        {
	            if(k%i==0)
	            pc++;
	        }
	        if(pc==0)
	        break;
	        else
	        k++;
	    }
	    cout<<k-sum<<endl;
	}
	return 0;
}
