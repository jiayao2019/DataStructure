/*
描述
输入数组长度 n 输入数组      a[1...n] 输入查找个数m 输入查找数字b[1...m]   输出 YES or NO  查找有则YES 否则NO 。
输入描述：
输入有多组数据。 每组输入n，然后输入n个整数，再输入m，然后再输入m个整数（1<=m,n<=100）。
输出描述：
如果在n个数组中输出YES否则输出NO。
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
//#include <iomanip>
using namespace std;

int BinarySearch(int a[],int target,int len){
	int low = 0,high = len-1,mid;
	while(low <= high){
		mid = (low+high)/2;
		if(target > a[mid]){
			low = mid+1;
		}else if(target < a[mid]){
			high = mid-1;
		}else{
			return mid;
		}
	}
	return -1;
} 

int main()
{	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	
	//先排序 
	sort(a,a+n);
	for(int i=0;i<m;i++){
		if(BinarySearch(a,b[i],n) != -1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
    return 0;
}
