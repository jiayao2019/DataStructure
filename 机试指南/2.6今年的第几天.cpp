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
	int year,month,day;
	int monthDay[12]={31,28,31,30,31,30,31,31,30,31,30,31};//�·ݵ����� 
	cin>>year>>month>>day;
	int sum=0;
	for(int i=0;i<month-1;i++){
		sum += monthDay[i];
	}
	sum += day;
	if(f(year) && month>2){//��������꣬�����·ݳ�����2�²���Ҫ��1 
		sum += 1;
	}
	cout<<sum<<endl;
    return 0;
}
