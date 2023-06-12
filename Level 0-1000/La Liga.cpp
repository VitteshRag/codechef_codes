#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    int b,rm,e,m;
	    for(int i=1;i<=4;i++)
	    {
	        cin>>s;
	        if(s=="Barcelona")
	        cin>>b;
	        else if(s=="RealMadrid")
	        cin>>rm;
	        else if(s=="Eibar")
	        cin>>e;
	        else if(s=="Malaga")
	        cin>>m;
	    }
	    if((b>e)&&(rm<m))
	    cout<<"Barcelona"<<endl;
	    else
	    cout<<"RealMadrid"<<endl;
	}
	return 0;
}
