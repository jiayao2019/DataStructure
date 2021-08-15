/*
描述
在一个整数数组上，对于下标为i的整数，如果它大于所有它相邻的整数， 或者小于所有它相邻的整数，则称为该整数为一个极值点，极值点的下标就是i。
输入描述：
第一行是此数组的元素个数k(4<k<80)，第二行是k个整数，每两个整数之间用空格分隔。
输出描述：
每个案例输出为n行：每行对应于相应数组的所有极值点下标值，下标值之间用空格分隔。
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
//#include <iomanip>
using namespace std;

typedef struct Number{
	int x;
	int y;
}Number;

//升序 
bool compare(Number a,Number b){
	
	if(a.x == b.x){//如果x相等则比较y 
		return a.y < b.y;
	}else{
		return a.x < b.x;
	}
}

int main()
{	
	int n;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	
	//第一个和最后一个需要单独判断 
	if(num[0] != num[1]){
		cout<<0<<" ";
	}
	for(int i=1;i<n-1;i++){
		if(num[i]>num[i-1]&&num[i]>num[i+1] || num[i]<num[i-1]&&num[i]<num[i+1]){
			cout<<i<<" ";
		}
	}
	if(num[n-2] != num[n-1]){
		cout<<n-1<<" ";
	}
	

    return 0;
}
