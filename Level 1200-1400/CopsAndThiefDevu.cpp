#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int m,x,y;
	    cin>>m>>x>>y;
	    int ar[101];
	    int cop[m];
	    int h=x*y;
	    for(int i=0;i<m;i++)
	    {
	        cin>>cop[i];
	    }
	    for(int i=1;i<=100;i++)
	    {
	        ar[i]=1;
	    }
	    for(int i=0;i<m;i++)
	    {
	        int range1=cop[i]-h;
	        int range2=cop[i]+h;
	        if(range1<0)
	        range1=0;
	        if(range2>100)
	        range2=100;
	        for(int j=range1;j<=range2;j++)
	        {
	            ar[j]=0;
	        }
	    }
	    int count=0;
	    for(int i=1;i<=100;i++)
	    {
	        if(ar[i]==1)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
