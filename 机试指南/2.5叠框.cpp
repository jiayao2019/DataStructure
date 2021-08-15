#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
	int n;
	char a,b;
	cin>>n>>a>>b;
	char matrix[n][n]={};
	if((n/2+1)%2 == 0){//如果共偶数圈，则最内和最外圈是不一样的 
		char temp = a;
		a = b;
		b = temp;
	}
	for(int i=0;i<n/2+1;i++){//只有n/2+1圈
		for(int j=i;j<n-i;j++){//每一圈 
			matrix[i][j] = (i%2==0)?a:b;//上 
			matrix[j][i] = i%2==0?a:b;//左 
			matrix[n-i-1][j] = i%2==0?a:b;//下 
			matrix[j][n-i-1] = i%2==0?a:b;//右 
		}
	}
	matrix[0][0]=NULL,matrix[n-1][n-1]=NULL,matrix[0][n-1]=NULL,matrix[n-1][0]=NULL;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
    return 0;
}
