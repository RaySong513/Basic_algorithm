#include<bits/stdc++.h>
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	int i;
	int n=0;
	for(int i=15;i<128;i++)
	{
		if(n%10==0&&n>0)
		{
			cout<<endl;
		}
		cout<<setw(4)<<i<<":"<<(char) i<<" ";
		n++;
	}
	cout<<endl;
	system("pause");
	return 0;	
} 
