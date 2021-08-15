/*
设N是一个四位数，它的9倍恰好是其反序数
*/

#include <iostream>
using namespace std;

int main(){
	for(int i=1000;i<1100;i++){
		int revx = 0,x = i;
		while(x>0){
			revx *= 10;
			revx += x%10;
			x /= 10;
		}
		if(i*9 == revx){
			cout<<i<<endl;
		}
	}
	return 0;
}
