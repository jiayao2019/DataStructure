/*
描述
输入一个数n，然后输入n个数值各不相同，再输入一个值x，输出这个值在这个数组中的下标（从0开始，若不在数组中则输出-1）。
输入描述：
测试数据有多组，输入n(1<=n<=200)，接着输入n个数，然后输入x。
输出描述：
对于每组输入,请输出结果。
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
//#include <iomanip>
using namespace std;

int main()
{	
	int n;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int x;
	cin>>x;
	int index = -1;
	for(int i=0;i<n;i++){
		if(x == num[i]){
			index = i;
			break;
		}
	}
	cout<<index;
    return 0;
}
