#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;


int main() {
	int sum[10000]={0},num[10000]={0};
	num[0] = 1;
	int length=1;//初始num数组长度 
	//直接在已有基础上乘以下一个数可以得到下一个阶乘,在加上这个阶乘 
	
	for(int i=1;i<=1977;i++){		
		//每个数都用的数组表示，每一位都乘以i，再判断进位 
		//i的阶乘 每换一个新的i则在原来基础上乘以i得到新的阶乘 
		for(int j=0;j<length;j++){
			num[j] *= i;
		}
		
		//格式化，使每一位都小于10 
		for(int j=0;j<length;j++){
			if(num[j]>9){//进位 
				num[j+1] += num[j]/10;//由于是乘法，可能不只进一位 
				num[j] %= 10; 
				if(j+1 == length ){//进位导致长度不够，num长度加1，同时退出循环 
					length++;
				}
			} 
		}
	}//此时的num这个数组表示k的阶乘，数组的一位表示大数的一个数字 
	
	for(int i=length-1;i>=0;i--){
		cout<<num[i];
	} 
//cout<<length;
    return 0;
}
