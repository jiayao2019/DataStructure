/*
����
���鱨���ݹ����У�Ϊ�˷�ֹ�鱨���ػ�������Ҫ���鱨��һ���ķ�ʽ���ܣ��򵥵ļ����㷨��Ȼ��������ȫ�����鱨�����룬����Ȼ�ܷ�ֹ�鱨�����׵�ʶ�����Ǹ���һ�����ĵļ��ܷ������Ը�����һ���ַ����������д�a-y,A-Y����ĸ��������ĸ�������z��Z��a��A�������ɵõ�һ���򵥵ļ����ַ�����
����������
��ȡ��һ���ַ�����ÿ���ַ�������С��80���ַ�
���������
����ÿ�����ݣ����ÿ���ַ����ļ����ַ�����
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{	
	string pwd;
	getline(cin,pwd);
	for(int i=0;i<pwd.size();i++){
		if(pwd[i]>='a'&&pwd[i]<='z' || pwd[i]>='A'&&pwd[i]<='Z'){
			if(pwd[i] == 'z') pwd[i] = 'a';
			if(pwd[i] == 'Z') pwd[i] = 'A';
			else pwd[i] += 1;
		}
		
	}
	cout<<pwd;
    return 0;
}
