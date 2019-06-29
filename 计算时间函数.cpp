#include<bits/stdc++.h> 
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    clock_t startTime,endTime;
   	startTime = clock();//计时开始
    for (int i = 0; i < 2147483640; i++)
     {
         i++;
     }
    endTime = clock();//计时结束
    cout << "Run Time:" <<(double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
    system("pause");
    return 0;
}
