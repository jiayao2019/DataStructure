/*计算日期是周几*/
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

//判断闰年 
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
		//判断当前月份
		int monthNumber;
		for(int i=0;i<12;i++){
			if(month == monthtab[i]){
				monthNumber = i+1;
				break;
			}
		}
		//这一年过了多少天
		int sum=0;
		int row = f(year);//判断用month的哪一行 
		for(int i=0;i<monthNumber-1;i++){
			sum += daytab[row][i];
		} 
		sum += day;
		
		//前year-1年的天数 
		int sumYear=0; 
		for(int i=1;i<year;i++){//前year-1年 
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
