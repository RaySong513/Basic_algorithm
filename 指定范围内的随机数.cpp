//指定范围内的随机数 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("out.txt","w",stdout);
	int low;
	int hight;
	srand((unsigned)time(NULL));
	cin>>low>>hight;
	for(int i=0;i<100000;i++)
	{
		cout<<rand()%(hight-low+1)+low<<' ';
	} 
	system("pause");
	return 0;
}
