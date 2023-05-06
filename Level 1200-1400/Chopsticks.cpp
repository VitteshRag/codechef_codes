#include <bits/stdc++.h>
using namespace std;

int main() {
	long int n,d;
	cin>>n>>d;
	long int ar[n];
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	}
	sort(ar,ar+n);
	int count=0;
	for(int i=1;i<n;i++)
	{
	    if(ar[i]-ar[i-1]<=d)
	    {count++;
	    i++;
	}}
	cout<<count<<endl;
	return 0;
}
