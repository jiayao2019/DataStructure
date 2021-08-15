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
	int year,month,day;
	int monthDay[12]={31,28,31,30,31,30,31,31,30,31,30,31};//月份的天数 
	cin>>year>>month>>day;
	int sum=0;
	for(int i=0;i<month-1;i++){
		sum += monthDay[i];
	}
	sum += day;
	if(f(year) && month>2){//如果是闰年，并且月份超出了2月才需要加1 
		sum += 1;
	}
	cout<<sum<<endl;
    return 0;
}
