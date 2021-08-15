#include <iostream>
#include <math.h>
#include <string.h>
//#include <iomanip>
using namespace std;

int max(int a,int b,int c){
	int max = a;
	if(b>max) max = b;
	if(c>max) max = c;
}


int main()
{	
	int P,T,G1,G2,G3,GJ;
	double grade;
	cin>>P>>T>>G1>>G2>>G3>>GJ;
	if(abs(G1-G2) <= T){
		grade = (G1+G2)/2.0;
	} else{
		if(abs(G3-G1)<=T&&abs(G3-G2)>T || abs(G3-G2)<=T&&abs(G3-G1)>0){
			grade = abs(G3-G1)<=abs(G3-G2)?(G3+G1)/2.0:(G3+G2)/2.0;
		}else if(abs(G3-G1)<=T&&abs(G3-G2)<=T){
			grade = max(G1,G2,G3);
		}else if(abs(G3-G1)>T&&abs(G3-G2)>T){
			grade = GJ;
		}
	}
	printf("%.1f",grade);
    return 0;
}
