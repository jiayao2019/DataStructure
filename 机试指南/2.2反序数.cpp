/*
��N��һ����λ��������9��ǡ�����䷴����
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
