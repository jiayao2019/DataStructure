/*
����
����һ����n��Ȼ������n����ֵ������ͬ��������һ��ֵx��������ֵ����������е��±꣨��0��ʼ�������������������-1����
����������
���������ж��飬����n(1<=n<=200)����������n������Ȼ������x��
���������
����ÿ������,����������
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
//#include <iomanip>
using namespace std;

int main()
{	
	int n;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int x;
	cin>>x;
	int index = -1;
	for(int i=0;i<n;i++){
		if(x == num[i]){
			index = i;
			break;
		}
	}
	cout<<index;
    return 0;
}
