#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
	int n;
	char a,b;
	cin>>n>>a>>b;
	char matrix[n][n]={};
	if((n/2+1)%2 == 0){//�����ż��Ȧ�������ں�����Ȧ�ǲ�һ���� 
		char temp = a;
		a = b;
		b = temp;
	}
	for(int i=0;i<n/2+1;i++){//ֻ��n/2+1Ȧ
		for(int j=i;j<n-i;j++){//ÿһȦ 
			matrix[i][j] = (i%2==0)?a:b;//�� 
			matrix[j][i] = i%2==0?a:b;//�� 
			matrix[n-i-1][j] = i%2==0?a:b;//�� 
			matrix[j][n-i-1] = i%2==0?a:b;//�� 
		}
	}
	matrix[0][0]=NULL,matrix[n-1][n-1]=NULL,matrix[0][n-1]=NULL,matrix[n-1][0]=NULL;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
    return 0;
}
