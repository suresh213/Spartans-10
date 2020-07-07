#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,k;
    cin>>num>>k;
    if(num&(1<<(k-1)))
    {
    	cout<<"SET";
	}
	else
	{
		cout<<"Not SET";
	}
}
