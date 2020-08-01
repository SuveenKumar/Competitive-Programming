#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long int n;
	cin>>n;
	long int a[n],decider[n],sum;
	for(long int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	decider[n-1]=a[n-1];
	sum=a[n-1];
	for(long int i=n-2;i>=0;i--)
	{
	    sum+=a[i];
	    decider[i]=max(decider[i+1],sum-decider[i+1]);
	}
	cout<<sum-decider[0]<<" "<<decider[0]<<endl;
	return 0;
}