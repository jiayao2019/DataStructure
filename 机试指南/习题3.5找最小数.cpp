/*
����
��һ������һ����n��1 <= n <= 1000����������n�����ݣ�ÿһ�������������ֱ���x y�����һ��x y����������������������x��С������x��ȵ������y��С�ġ� 
����������
�����ж������ݡ� ÿ������n��Ȼ������n�������ԡ�
���������
�����С�������ԡ�
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
//#include <iomanip>
using namespace std;

typedef struct Number{
	int x;
	int y;
}Number;

//���� 
bool compare(Number a,Number b){
	
	if(a.x == b.x){//���x�����Ƚ�y 
		return a.y < b.y;
	}else{
		return a.x < b.x;
	}
}

int main()
{	
	int n;
	cin>>n;
	Number num[n];

	for(int i=0;i<n;i++){
		cin>>num[i].x>>num[i].y;
	}
	
	sort(num,num+n,compare);
	cout<<num[0].x<<" "<<num[0].y;
    return 0;
}
