#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("data.txt","r",stdin);
	int n;
	int a[100010];
	int jiaohuan;
	cin>>n;
	
	for(int h=0;h<n;h++)
	{
		cin>>a[h]; 
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
	 
	for(int y=0;y<n;y++)
	{
		cout<<a[y]<<" ";
	}
	return 0;
}
