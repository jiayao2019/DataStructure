/*
����
��һ�����������ϣ������±�Ϊi��������������������������ڵ������� ����С�����������ڵ����������Ϊ������Ϊһ����ֵ�㣬��ֵ����±����i��
����������
��һ���Ǵ������Ԫ�ظ���k(4<k<80)���ڶ�����k��������ÿ��������֮���ÿո�ָ���
���������
ÿ���������Ϊn�У�ÿ�ж�Ӧ����Ӧ��������м�ֵ���±�ֵ���±�ֵ֮���ÿո�ָ���
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

//���� 
bool compare(Number a,Number b){
	
	if(a.x == b.x){//���x�����Ƚ�y 
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
	
	//��һ�������һ����Ҫ�����ж� 
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
