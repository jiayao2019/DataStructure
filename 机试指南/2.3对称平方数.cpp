#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

//������ 
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
		//�жϷ������Ƿ�������� 
		if(reverse(i*i) == i*i){
			cout<<i<<endl;
		}
	}	
    return 0;
}
