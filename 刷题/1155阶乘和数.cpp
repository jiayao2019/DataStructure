#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int f(int n){
	int ret = 1;
	for(int i=1;i<=n;i++){
		ret *= i;
	}
	return ret;
}

int main() {
	for(int i=1;i<=9;i++){//���ֵ�˳����� 
		int zhi = 0,sum;
		for(zhi=0;zhi<5;zhi++){//ָ��������λ��  100000���ָ��Ϊ5 
			for(int j=i*pow(10,zhi);j<i*pow(10,zhi)+pow(10,zhi);j++){//��ͬ��ͷ������ 
//				cout<<j<<endl;
				int k = j;
				sum = 0;
				while(k != 0){
					sum += f(k%10);
					k /= 10;
				}
				if(sum == j){
					cout<<j<<" ";
				}
			}
		}
		
	}
    return 0;
}

