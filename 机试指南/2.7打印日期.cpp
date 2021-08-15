#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
using namespace std;

bool f(int year){
	if(year%4==0&&year%100!=0 || year%400==0){
		return true;
	}
	return false;
}

int main()
{
	int year,month,days,day;
	int monthDay[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>year>>days;
	
	int sum=0;
	if(f(year) && days>=59){//如果闰年、且天数超过了1 2月，转为平年 
			days -= 1;
		}
	for(int i=0;i<12;i++){
		sum += monthDay[i];
		if(sum > days){
			month = i+1;
			sum -= monthDay[i];
			break;
		}
	}
	day = days - sum;
	cout<<year<<"-"<<setfill('0')<<setw(2)<<month<<"-"<<setfill('0')<<setw(2)<<day; 

    return 0;
}

