#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
   int n,i,j,sum=0,min_sum=1000000000;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
   	sum=0;
   	for(j=i+1;j<n;j++)
   	{
   		sum+=(a[i]^a[j]);
   		if(sum<min_sum)
   		{
   			min_sum=sum;
		   }
	}
   }
   cout<<min_sum;
} 
