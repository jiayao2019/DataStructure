/*
查找和排序

题目：输入任意（用户，成绩）序列，可以获得成绩从高到低或从低到高的排列,相同成绩
都按先录入排列在前的规则处理。

示例：
jack      70
peter     96
Tom       70
smith     67

从高到低  成绩
peter     96
jack      70
Tom       70
smith     67

从低到高

smith     67

jack      70
Tom      70
peter     96

注意一个case里面有多组样例，请用循环处理输入 输入多行，先输入要排序的人的个数，然后输入排序方法0（降序）或者1（升序）再分别输入他们的名字和成绩，以一个空格隔开。
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

//升序 
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
