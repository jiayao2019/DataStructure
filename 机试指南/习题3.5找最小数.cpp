/*
描述
第一行输入一个数n，1 <= n <= 1000，下面输入n行数据，每一行有两个数，分别是x y。输出一组x y，该组数据是所有数据中x最小，且在x相等的情况下y最小的。 
输入描述：
输入有多组数据。 每组输入n，然后输入n个整数对。
输出描述：
输出最小的整数对。
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
	Number num[n];

	for(int i=0;i<n;i++){
		cin>>num[i].x>>num[i].y;
	}
	
	sort(num,num+n,compare);
	cout<<num[0].x<<" "<<num[0].y;
    return 0;
}
