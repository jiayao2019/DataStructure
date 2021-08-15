#include <iostream>
#include <math.h>
#include <string.h>
//#include <iomanip>
using namespace std;



int main()
{	
	int keytab[26] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};//按键次数 
	int time=0;
	char input[100];
	cin>>input;

	for(int i=0;i<strlen(input);i++){
		//input[i]-'a'是两个字母间的距离,也就是keytab的下标 
		time += keytab[input[i]-'a'];
		//i>0因为第一个字符前面没有字符
		//input[i]-'a'就是两个字符之间的距离,就是keytab中的下标
		//如果两个字母属于同一按键则两个字母的间距就是他们按键次数的差,否则他们不在同一按键 
		//同一按键字母相邻 
		if(i>0 && input[i]-input[i-1]==keytab[input[i]-'a']-keytab[input[i-1]-'a']){
			time += 2; 
		}
	}
	cout<<time; 
    return 0;
}
