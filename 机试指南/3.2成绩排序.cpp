/*��һά����洢ѧ�źͳɼ���Ȼ�󣬰��ɼ����������

*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
//#include <iomanip>
using namespace std;

typedef struct Student{
	int id;
	int grade;
}Student;

bool compare(Student x,Student y){
	if(x.grade == y.grade){//�ɼ���ȱȽ�ѧ�ţ�����Ƚϳɼ� 
		return x.id < y.id;//���� 
	}else{
		return x.grade < y.grade;
	}
}

int main()
{	
	int n;
	cin>>n;
	Student student[n];
	for(int i=0;i<n;i++){
		cin>>student[i].id>>student[i].grade;
	}
	sort(student,student+n,compare);
	for(int i=0;i<n;i++){
	cout<<student[i].id<<" "<<student[i].grade<<endl;
	}
	
    return 0;
}
