/*
描述
在情报传递过程中，为了防止情报被截获，往往需要对情报用一定的方式加密，简单的加密算法虽然不足以完全避免情报被破译，但仍然能防止情报被轻易的识别。我们给出一种最简的的加密方法，对给定的一个字符串，把其中从a-y,A-Y的字母用其后继字母替代，把z和Z用a和A替代，则可得到一个简单的加密字符串。
输入描述：
读取这一行字符串，每个字符串长度小于80个字符
输出描述：
对于每组数据，输出每行字符串的加密字符串。
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
