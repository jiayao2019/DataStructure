/*
һ��������,������ܱ�7����,��������ʮ���Ʊ�ʾ����ĳ��λ���ϵ�����Ϊ7, �����Ϊ��7��ص���.
��������С�ڵ���n(n<100)����7�޹ص���������ƽ���͡�
*/

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
	int sum=0,n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%7!=0 && i%10!=7){
//			cout<<i<<endl;
			sum += i*i;
		}
	}	
	cout<<sum<<endl;
    return 0;
}
