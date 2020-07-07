#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
    cin>>n;
    for(i=n;i>=1;i--)
    {
     if((i&(i-1))==0)
     {
     	cout<<i;
     	break;
	 }
    }
}
