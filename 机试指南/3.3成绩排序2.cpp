/*
���Һ�����

��Ŀ���������⣨�û����ɼ������У����Ի�óɼ��Ӹߵ��ͻ�ӵ͵��ߵ�����,��ͬ�ɼ�
������¼��������ǰ�Ĺ�����

ʾ����
jack      70
peter     96
Tom       70
smith     67

�Ӹߵ���  �ɼ�
peter     96
jack      70
Tom       70
smith     67

�ӵ͵���

smith     67

jack      70
Tom      70
peter     96

ע��һ��case�����ж�������������ѭ���������� ������У�������Ҫ������˵ĸ�����Ȼ���������򷽷�0�����򣩻���1�������ٷֱ��������ǵ����ֺͳɼ�����һ���ո������
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
bool compareAsc(Student x,Student y){
	return x.grade < y.grade;
}
	return x.grade > y.grade;
}

int main()
{	
	int n,rule;
	while(cin>>n>>rule){
		Student student[n];
		for(int i=0;i<n;i++){
			cin>>student[i].name>>student[i].grade;
		}
		if(rule == 1){
			stable_sort(student,student+n,compareAsc);
		}else{
			stable_sort(student,student+n,compareDes);
		}
		
		for(int i=0;i<n;i++){
			cout<<student[i].name<<" "<<student[i].grade<<endl;
		}
	}
    return 0;
}
