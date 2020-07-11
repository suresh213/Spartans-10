#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	int sum=a[0],max=a[0];
	for(i=1;i<n;i++)
    {
        sum+=a[i];
        if(sum<a[i])
        {
        	sum=a[i];
		}
        if(sum>max)
        {
        	max=sum;
		}
	}
	cout<<max;
    return 0; 
} 
