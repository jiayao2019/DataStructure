/*
����
����һϵ������������������������(����ж����������һ������)������ʣ�µ����������������ʣ������������-1��
����������
�����һ�а���1������N��1<=N<=1000�������������ݵĸ����� ��������һ����N��������
���������
�����ж���������ݣ�����ÿ�����ݣ� ��һ�����һ������������N�������е����ֵ��������ֵ��������ȥ������ʣ�µ����������� �ڶ��н�����Ľ�������
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
	if(n == 1){
		cout<<num[0]<<endl<<-1;
		return 0;
	}
	sort(num,num+n);
	cout<<num[n-1]<<endl;
	for(int i=0;i<n-1;i++){
		cout<<num[i]<<" ";
	}
    return 0;
}
