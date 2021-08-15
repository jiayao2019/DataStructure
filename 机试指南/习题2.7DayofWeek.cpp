/*�����������ܼ�*/
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
	int daytab[2][12]={
		{31,28,31,30,31,30,31,31,30,31,30,31},
		{31,29,31,30,31,30,31,31,30,31,30,31}
	};
	string week[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	string monthtab[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	int day,year;
	string month;
	while(cin>>day>>month>>year){
		//�жϵ�ǰ�·�
		int monthNumber;
		for(int i=0;i<12;i++){
			if(month == monthtab[i]){
				monthNumber = i+1;
				break;
			}
		}
		//��һ����˶�����
		int sum=0;
		int row = f(year);//�ж���month����һ�� 
		for(int i=0;i<monthNumber-1;i++){
			sum += daytab[row][i];
		} 
		sum += day;
		
		//ǰyear-1������� 
		int sumYear=0; 
		for(int i=1;i<year;i++){//ǰyear-1�� 
			if(f(i)){
				sumYear += 366;
			}else{
				sumYear += 365;
			} 
		}
		
		int s = sumYear + sum;
		cout<<week[(s-1)%7]<<endl;
	}
	
    return 0;
}
