/*���������ڣ�����������֮���������
����������������������ǹ涨����֮�������Ϊ����*/
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

//�ж����� 
bool f(int year){
	if(year%4==0&&year%100!=0 || year%400==0){
		return true;
	}
	return false;
}

int main()
{
	int date1,date2;
	int year1=0,year2=0,month1=0,month2=0,day1=0,day2=0;
	cin>>date1>>date2;
	year1 = date1/10000;
	month1 = date1%10000/100;
	day1 = date1%100;
	year2 = date2/10000;
	month2 = date2%10000/100;
	day2 = date2%100;
	
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	//��һ��ֱ���˶�����
	int sum1=0,sum2=0;
	for(int i=0;i<month1-1;i++){
		sum1 += month[i];
	} 
	sum1 += day1;
	
	for(int i=0;i<month2-1;i++){
		sum2 += month[i];
	} 
	sum2 += day2;
	
	//ǰyear-1������� 
	long int sumYear1=0,sumYear2=0; 
	for(int i=1;i<year1;i++){//ǰyear-1�� 
		if(f(year1)) sumYear1 += 366;
		else sumYear1 += 365;
	}
	for(int i=1;i<year2;i++){//ǰyear-1�� 
		if(f(year2)) sumYear2 += 366;
		else sumYear2 += 365;
	}
	
	int s1 = sumYear1 + sum1;
	int s2 = sumYear2 + sum2;
	
	cout<<abs(s1-s2)+1;
    return 0;
}
