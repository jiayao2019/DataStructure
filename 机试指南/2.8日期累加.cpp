/**给输入第一行表示样例个数m，接下来m行每行四个整数分别表示年月日和累加的天数*/
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
	int n,year,month,day,count;
	int monthDay[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	int sum=0;
	
	for(int i=0;i<n;i++){
		cin>>year>>month>>day>>count;
		count -= monthDay[month-1]-day;//去除本月的剩余天数 
		for(int j=month;;j++){//从本月的下一个月开始 
			j %= 12;//取模，新一年的开始 
			if(j == 0){//满一年 
				year++;
			}
			if(count <= monthDay[j%12]){//减去中间几个整月份的天数，剩下的就是最后那个月的天数
				day = count;
				month = j+1;//下标+1等于月份 
				break; 
			}
			count -= monthDay[j];//i+1月及以后还剩下多少天 
			if(f(year) && j==1){//闰年的二月多了一天 
				count -= 1;
			}
		}
		cout<<year<<"-"<<setfill('0')<<setw(2)<<month<<"-"<<setfill('0')<<setw(2)<<day<<endl;
	}
    return 0;
}

/*
另一种解法是，融合前两道题，根据已有日期算出当前已经过了多少天，加上输入的若干天
所有天数之和再转换为日期 
*/

