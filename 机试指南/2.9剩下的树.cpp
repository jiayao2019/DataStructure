#include <iostream>
#include <math.h>
#include <string.h>
//#include <iomanip>
using namespace std;


int main()
{	
	int L,M;
	cin>>L>>M;
//cin>>L;
//int tree[10];
//	int tree[L+1]; 
	int *tree = new int[L+1];//��ʼ����Ϊ0��ʾ������ ע����L+1���� 
	for(int i=0;i<M;i++){
		int start,end;
		cin>>start>>end;
		for(int j=start;j<=end;j++){
			tree[j] = 1;//�������� 
		}
	}
	int count=0;
	for(int i=0;i<=L;i++){
		if(tree[i] == 0){
			count++;
		}
//	cout<<tree[i]<<endl;
	}
	cout<<count;
    return 0;
}
