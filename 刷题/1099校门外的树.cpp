#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;


int main()
{
	int l,m;
	cin>>l>>m;
	int flag[l+1] = {0};//用数组来表示马路上的点是否有树，有则记为1,由于包含端点，所以l+1 
	for(int i=0;i<m;i++){
		int start,end;
		cin>>start>>end;
		for(int j=start;j<=end;j++){
			flag[j] = 1;//种了树的点 
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

