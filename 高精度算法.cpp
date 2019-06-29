#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int c[100];
	int add(int a[],int b[]);
	{
		int i=1,x=0;
		while((i<=a)||(i<=b))
		{
			c[i]=a[i]+b[i]+x;
			x=c[i]/10;
			c[i]=c[i]%10;
			i++;
		}	
		return c[i];
	}
	int m,n;
	cin>>m>>n;
	add(10.10);
return 0;
}
