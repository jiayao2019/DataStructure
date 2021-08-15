/**
 Among grandfather's papers a bill was found.
72 turkeys $_679_     
The first and the last digits of the number that obviously represented the total price of those turkeys are replaced here by blanks (denoted _),
for they are faded and are illegible. What are the two faded digits and what was the price of one turkey? 
 We want to write a program that solves a general version of the above problem.    
N turkeys $_XYZ_     The total number of turkeys, N, is between 1 and 99, including both. 
The total price originally consisted of five digits, but we can see only the three digits in the middle.
We assume that the first digit is nonzero, that the price of one turkeys is an integer number of dollars, 
and that all the turkeys cost the same price.    
Given N, X, Y, and Z, write a program that guesses the two faded digits and the original price. 
In case that there is more than one candidate for the original price, the output should be the most expensive one. 
That is, the program is to report the two faded digits and the maximum price per turkey for the turkeys.
 */
 #include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
	int n,x,y,z,start,end,price=0;
	cin>>n>>x>>y>>z;
	int flag=0;//是否找到的标识 
	for(int start=9;start>0;start--){//从最大开始找 
		for(int end=9;end>=0;end--){
			price = x*1000+y*100+z*10 + start*10000+end;
			if(price%n == 0){
				cout<<start<<" "<<end<<" "<<price/n<<endl;
				flag = 1;//找到置为1，可以用来跳出第一层循环 
				break;
			}
		}
		if(flag){
			break;
		}
	}
	if(flag == 0){//没有找的的情况 
		cout<<0;
	}
    return 0;
}
