#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

bool judge(int num[],int length){
	for(int i=0;i<length;i++){
		if(num[i] != num[length-i-1]){
			return false;
		}
	}
	return true;
}

int main()
{
	int n,m,sum[30]={0},i=0,num[30]={0},step;
	cin>>n>>m;
	int length=0;
	while(m>0){
		num[length] = m%10;
		m /= 10;
		length++;
	}
	step=0;
	while(step<=30){
		step++;
		for(int i=0;i<length;i++){
			sum[i] = sum[i] + num[i] + num[length-i-1];//对应位数相加，需要sum数组，如果还用num的话，由于这是回文相加，num[i]的值会改变，下一次相加的数则有误 
			if(sum[i]>n-1){//进位 
				sum[i] %= n;//n进制 
				sum[i+1]++;	
				if(i+1 == length){//高位进位，长度需要加1 
					length++;
					break;
				}
			}
		}
		if(judge(sum,length)){
			cout<<"STEP="<<step<<endl;
			break;
		}else if(step==30){
			cout<<"Impossible!"<<endl;
			break;
		}
		
		//若要进行下一步，则需要相加的是sum，将sum复制给num 
		for(int i=0;i<length;i++){
			num[i] = sum[i];
			sum[i] = 0;//sum初始化为0，下一步的相加是num+num，sum只是暂时存放 
		}
	}
	
    return 0;
}
