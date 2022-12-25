/*Chef has N bags and an integer XX. The ith bag contains
  Ai coins such that Ai≤X.In one operation, Chef can:
 Pick any bag and increase its coins to X. Formally, if he choses the ith
  bag, he can set Ai = X*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,c,count=0,s=0,cost=0;
	    cin>>n>>x>>c;
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	        if(x-ar[i]>c)
	        {
	            count++;
	            ar[i]=x;
	            cost+=c;
	        }
	        s+=ar[i];
	    }
	    cout<<s-cost<<endl;
	    
	}
	return 0;
}
