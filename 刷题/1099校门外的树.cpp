#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;


int main()
{
	int l,m;
	cin>>l>>m;
	int flag[l+1] = {0};//����������ʾ��·�ϵĵ��Ƿ������������Ϊ1,���ڰ����˵㣬����l+1 
	for(int i=0;i<m;i++){
		int start,end;
		cin>>start>>end;
		for(int j=start;j<=end;j++){
			flag[j] = 1;//�������ĵ� 
		}
	}
	int count = 0;
	for(int i=0;i<=l;i++){
		if(flag[i] == 0){
			count++;
		}
//cout<<flag[i]<<" ";
	}
	cout<<count;
    return 0;
}

