/*
一个正整数,如果它能被7整除,或者它的十进制表示法中某个位数上的数字为7, 则称其为与7相关的数.
现求所有小于等于n(n<100)的与7无关的正整数的平方和。
*/

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
	int sum=0,n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%7!=0 && i%10!=7){
//			cout<<i<<endl;
			sum += i*i;
		}
	}	
	cout<<sum<<endl;
    return 0;
}
