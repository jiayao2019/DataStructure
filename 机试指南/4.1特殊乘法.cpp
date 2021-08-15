/*
描述
写个算法，对2个小于1000000000的输入，求结果。 特殊乘法举例：123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5
输入描述：
两个小于1000000000的数
输出描述：
输入可能有多组数据，对于每一组数据，输出Input中的两个数按照题目要求的方法进行运算后得到的结果。
*/
#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
//#include <iomanip>
using namespace std;

int main()
{	
	string a,b;
	cin>>a>>b;
	int sum = 0;
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b.size();j++){
			sum += (a[i]-'0')*(b[j]-'0');
		}
	}
	cout<<sum;

    return 0;
}
