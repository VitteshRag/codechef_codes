/*Rushitote went to a programming contest to
distribute apples and oranges to the contestants.
He has N apples and M oranges, which need to be
divided equally amongst the contestants.
Find the maximum possible number of contestants such that:


Every contestant gets an equal number of apples; and
Every contestant gets an equal number of oranges.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    cout<<__gcd(n,m)<<endl;
	}
	return 0;
}
