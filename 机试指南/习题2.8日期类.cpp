/*编写一个日期类，要求按xxxx-xx-xx 的格式输出日期，实现加一天的操作。*
#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
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
	int n,year,month,day;
	int row = f(year);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>year>>month>>day;
		day++;
		if(day-1 == daytab[row][month-1]){
			month++;
			day = 1;
		}
		cout<<year<<"-"<<setfill('0')<<setw(2)<<month<<"-"<<setfill('0')<<setw(2)<<day<<endl;
	} 
	
    return 0;
}
