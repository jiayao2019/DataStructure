/*
描述
输入10个整数，彼此以空格分隔。重新排序以后输出(也按空格分隔)，要求: 1.先输出其中的奇数,并按从大到小排列； 2.然后输出其中的偶数,并按从小到大排列。
输入描述：
任意排序的10个整数（0～100），彼此以空格分隔。
输出描述：
可能有多组测试数据，对于每组数据，按照要求排序后输出，由空格分隔。 1. 测试数据可能有很多组，请使用while(cin>>a[0]>>a[1]>>...>>a[9])类似的做法来实现; 2. 输入数据随机，有可能相等。
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
//#include <iomanip>
using namespace std;

typedef struct Student{
	char name[20];
	int grade;
}Student;

//升序 
bool compareDes(int x,int y){
	return x > y;
}
bool compareAsc(int x,int y){
	return x < y;
}


int main()
{	
	int x,odd[5],even[5];
	int o = 0,e = 0;//奇偶数组的各自下标 
	for(int i=0;i<10;i++){
		cin>>x;
		if(x%2 == 0){
			odd[o] = x;
			o++;
		}
		if(x%2 == 1){
			even[e] = x;
			e++;
		}
	}
	sort(odd,odd+o,compareAsc);//o 
	sort(even,even+e,compareDes); //e 
	
	for(int i=0;i<e;i++){
		cout<<even[i]<<" ";
	}
	for(int i=0;i<o;i++){
		cout<<odd[i]<<" ";
	}
    return 0;
}
