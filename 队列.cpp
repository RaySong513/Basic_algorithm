#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
queue<int> q;
int main()
{
	q.push(1);//add a "number" to the end of the line 
	q.push(2);
	q.push(3);
	q.push(4);
	cout<<q.front()<<endl;//output the first "number" in the line
	q.pop();//output and delete the first "number"
	cout<<q.front()<<endl;
	cout<<q.back()<<endl;//out put the last "number" in the line
	q.pop();
	cout<<"empty?:"<<q.empty()<<endl;//check if the line is empty
	cout<<q.size()<<endl;//check the size of the line
	q.pop();
	q.pop();
	cout<<"empty?:"<<q.empty()<<endl;
	cout<<q.front()<<endl;
	return 0;
}
