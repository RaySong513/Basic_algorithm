#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stack>//the file that must have 
using namespace std;
stack<int> s;
int main()
{
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	s.pop();
	s.pop();
	cout<<s.size()<<endl;
	s.pop();
	s.pop();
	cout<<s.size()<<endl; //overflow
	s.pop();
	cout<<s.top()<<endl;
}
