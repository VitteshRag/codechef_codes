#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,k,n,p,c,flag=0;
	    cin>>x>>y>>k>>n;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>p>>c;
	        if(p>=(x-y) && c<=k)
	        {
	            flag=1;
	        }
	    }
	    if(flag==1)
	    cout<<"LuckyChef"<<endl;
	    else
	    cout<<"UnluckyChef"<<endl;
	}
	return 0;
}
