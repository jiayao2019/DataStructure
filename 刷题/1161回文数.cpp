#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

bool judge(int num[],int length){
	for(int i=0;i<length;i++){
		if(num[i] != num[length-i-1]){
			return false;
		}
	}
	return true;
}

int main()
{
	int n,m,sum[30]={0},i=0,num[30]={0},step;
	cin>>n>>m;
	int length=0;
	while(m>0){
		num[length] = m%10;
		m /= 10;
		length++;
	}
	step=0;
	while(step<=30){
		step++;
		for(int i=0;i<length;i++){
			sum[i] = sum[i] + num[i] + num[length-i-1];//��Ӧλ����ӣ���Ҫsum���飬�������num�Ļ����������ǻ�����ӣ�num[i]��ֵ��ı䣬��һ����ӵ��������� 
			if(sum[i]>n-1){//��λ 
				sum[i] %= n;//n���� 
				sum[i+1]++;	
				if(i+1 == length){//��λ��λ��������Ҫ��1 
					length++;
					break;
				}
			}
		}
		if(judge(sum,length)){
			cout<<"STEP="<<step<<endl;
			break;
		}else if(step==30){
			cout<<"Impossible!"<<endl;
			break;
		}
		
		//��Ҫ������һ��������Ҫ��ӵ���sum����sum���Ƹ�num 
		for(int i=0;i<length;i++){
			num[i] = sum[i];
			sum[i] = 0;//sum��ʼ��Ϊ0����һ���������num+num��sumֻ����ʱ��� 
		}
	}
	
    return 0;
}
