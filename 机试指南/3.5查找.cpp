/*
����
�������鳤�� n ��������      a[1...n] ������Ҹ���m �����������b[1...m]   ��� YES or NO  ��������YES ����NO ��
����������
�����ж������ݡ� ÿ������n��Ȼ������n��������������m��Ȼ��������m��������1<=m,n<=100����
���������
�����n�����������YES�������NO��
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
	
	//������ 
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
