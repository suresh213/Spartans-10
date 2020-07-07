#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	char str[]={'a','b','c','d'};
    int total=pow(2,strlen(str));
    for(i=0;i<total;i++)
    {
    	for(j=0;j<strlen(str);j++)
    	{
    		if(i&(1<<j))
    		{
    			cout<<str[j];
			}
		}
		cout<<endl;
	}
}
