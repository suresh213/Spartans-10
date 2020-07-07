#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,count=0;
    cin>>num;
    while(num)
    {
    	num=num&(num-1);
    	count++;
	}
	cout<<count;
}
