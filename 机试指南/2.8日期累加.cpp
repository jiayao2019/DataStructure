/**�������һ�б�ʾ��������m��������m��ÿ���ĸ������ֱ��ʾ�����պ��ۼӵ�����*/
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
		count -= monthDay[month-1]-day;//ȥ�����µ�ʣ������ 
		for(int j=month;;j++){//�ӱ��µ���һ���¿�ʼ 
			j %= 12;//ȡģ����һ��Ŀ�ʼ 
			if(j == 0){//��һ�� 
				year++;
			}
			if(count <= monthDay[j%12]){//��ȥ�м伸�����·ݵ�������ʣ�µľ�������Ǹ��µ�����
				day = count;
				month = j+1;//�±�+1�����·� 
				break; 
			}
			count -= monthDay[j];//i+1�¼��Ժ�ʣ�¶����� 
			if(f(year) && j==1){//����Ķ��¶���һ�� 
				count -= 1;
			}
		}
		cout<<year<<"-"<<setfill('0')<<setw(2)<<month<<"-"<<setfill('0')<<setw(2)<<day<<endl;
	}
    return 0;
}

/*
��һ�ֽⷨ�ǣ��ں�ǰ�����⣬�����������������ǰ�Ѿ����˶����죬���������������
��������֮����ת��Ϊ���� 
*/

