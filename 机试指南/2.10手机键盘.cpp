#include <iostream>
#include <math.h>
#include <string.h>
//#include <iomanip>
using namespace std;



int main()
{	
	int keytab[26] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};//�������� 
	int time=0;
	char input[100];
	cin>>input;

	for(int i=0;i<strlen(input);i++){
		//input[i]-'a'��������ĸ��ľ���,Ҳ����keytab���±� 
		time += keytab[input[i]-'a'];
		//i>0��Ϊ��һ���ַ�ǰ��û���ַ�
		//input[i]-'a'���������ַ�֮��ľ���,����keytab�е��±�
		//���������ĸ����ͬһ������������ĸ�ļ��������ǰ��������Ĳ�,�������ǲ���ͬһ���� 
		//ͬһ������ĸ���� 
		if(i>0 && input[i]-input[i-1]==keytab[input[i]-'a']-keytab[input[i-1]-'a']){
			time += 2; 
		}
	}
	cout<<time; 
    return 0;
}
