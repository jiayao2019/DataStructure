/*
����
д���㷨����2��С��1000000000�����룬������ ����˷�������123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5
����������
����С��1000000000����
���������
��������ж������ݣ�����ÿһ�����ݣ����Input�е�������������ĿҪ��ķ������������õ��Ľ����
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
//#include <iomanip>
using namespace std;

int main()
{	
	string a,b;
	cin>>a>>b;
	int sum = 0;
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b.size();j++){
			sum += (a[i]-'0')*(b[j]-'0');
		}
	}
	cout<<sum;

    return 0;
}
