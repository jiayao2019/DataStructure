#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;


int main() {
	int sum[10000]={0},num[10000]={0};
	num[0] = 1;
	int length=1;//��ʼnum���鳤�� 
	//ֱ�������л����ϳ�����һ�������Եõ���һ���׳�,�ڼ�������׳� 
	
	for(int i=1;i<=1977;i++){		
		//ÿ�������õ������ʾ��ÿһλ������i�����жϽ�λ 
		//i�Ľ׳� ÿ��һ���µ�i����ԭ�������ϳ���i�õ��µĽ׳� 
		for(int j=0;j<length;j++){
			num[j] *= i;
		}
		
		//��ʽ����ʹÿһλ��С��10 
		for(int j=0;j<length;j++){
			if(num[j]>9){//��λ 
				num[j+1] += num[j]/10;//�����ǳ˷������ܲ�ֻ��һλ 
				num[j] %= 10; 
				if(j+1 == length ){//��λ���³��Ȳ�����num���ȼ�1��ͬʱ�˳�ѭ�� 
					length++;
				}
			} 
		}
	}//��ʱ��num��������ʾk�Ľ׳ˣ������һλ��ʾ������һ������ 
	
	for(int i=length-1;i>=0;i--){
		cout<<num[i];
	} 
//cout<<length;
    return 0;
}
