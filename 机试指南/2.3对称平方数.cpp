#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

//求反序数 
int  reverse(int x){
	int revx=0;
	while(x>0){
		revx *= 10;
		revx += x%10;
		x /= 10;
	}
	return revx;
}

int main()
{
	for(int i=0;i<=256;i++){
		//判断反序数是否等于自身 
		if(reverse(i*i) == i*i){
			cout<<i<<endl;
		}
	}	
    return 0;
}
