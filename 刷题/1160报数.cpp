#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main() {
	int i,k;
	int n,m;
	
	
	while(cin>>n>>m){
		i = 0,k = 0;//��ʼ�� 
		int count = n;//��ʼ���� 
		int number[n];//��ű�� 
		for(int i=0;i<n;i++){//��ʼ�� 
			number[i] = i+1;//��ʼ��Ϊ���ֵ 
		}
		while(count>1){//ֻʣһ����ʱ���� 
			i++;//��iָʾ��ǰ���е���� ѭ������ֻ�ж�Ӧֵ��Ϊ0�ű��� 
			if(number[(i-1)%n] != 0){//ѭ������ ���±� 
				k++;//ֻ�в�Ϊ0�ű��� 
			} 
			if(k==m && number[(i-1)%n]!=0){//����m���˲���֮ǰû�г�Ȧ������Ϊ0������Ȧ 
				k = 0;
				count--;//�������� 
				number[(i-1)%n] = 0;//��Ȧ 
			}
		}
		for(int i=0;i<n;i++){
			if(number[i] != 0){
				cout<<number[i]<<endl;
				break;
			}
		}
	}
//	cout<<(i-1)%n;
	
    return 0;
}

