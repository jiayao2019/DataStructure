/*
����
����10���������˴��Կո�ָ������������Ժ����(Ҳ���ո�ָ�)��Ҫ��: 1.��������е�����,�����Ӵ�С���У� 2.Ȼ��������е�ż��,������С�������С�
����������
���������10��������0��100�����˴��Կո�ָ���
���������
�����ж���������ݣ�����ÿ�����ݣ�����Ҫ�������������ɿո�ָ��� 1. �������ݿ����кܶ��飬��ʹ��while(cin>>a[0]>>a[1]>>...>>a[9])���Ƶ�������ʵ��; 2. ��������������п�����ȡ�
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
//#include <iomanip>
using namespace std;

typedef struct Student{
	char name[20];
	int grade;
}Student;

//���� 
bool compareDes(int x,int y){
	return x > y;
}
bool compareAsc(int x,int y){
	return x < y;
}


int main()
{	
	int x,odd[5],even[5];
	int o = 0,e = 0;//��ż����ĸ����±� 
	for(int i=0;i<10;i++){
		cin>>x;
		if(x%2 == 0){
			odd[o] = x;
			o++;
		}
		if(x%2 == 1){
			even[e] = x;
			e++;
		}
	}
	sort(odd,odd+o,compareAsc);//o 
	sort(even,even+e,compareDes); //e 
	
	for(int i=0;i<e;i++){
		cout<<even[i]<<" ";
	}
	for(int i=0;i<o;i++){
		cout<<odd[i]<<" ";
	}
    return 0;
}
