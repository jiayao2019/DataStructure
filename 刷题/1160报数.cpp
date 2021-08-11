#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main() {
	int i,k;
	int n,m;
	
	
	while(cin>>n>>m){
		i = 0,k = 0;//初始化 
		int count = n;//初始人数 
		int number[n];//存放编号 
		for(int i=0;i<n;i++){//初始化 
			number[i] = i+1;//初始化为编号值 
		}
		while(count>1){//只剩一个数时结束 
			i++;//用i指示当前进行到哪里， 循环计数只有对应值不为0才报数 
			if(number[(i-1)%n] != 0){//循环数组 得下标 
				k++;//只有不为0才报数 
			} 
			if(k==m && number[(i-1)%n]!=0){//报到m的人并且之前没有出圈的人置为0，即出圈 
				k = 0;
				count--;//人数减少 
				number[(i-1)%n] = 0;//出圈 
			}
		}
		for(int i=0;i<n;i++){
			if(number[i] != 0){
				cout<<number[i]<<endl;
				break;
			}
		}
	}
//	cout<<(i-1)%n;
	
    return 0;
}

