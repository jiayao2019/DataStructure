/*����ϵ���ߵȿ�ÿһ�е�������*����ֱ������ 
*/
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int buttom = n+(n-1)*2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=buttom;j++){
			if(j<=buttom-(n+(i-1)*2)) cout<<" ";
			else cout<<"*";
		}
		cout<<endl;
	} 
    return 0;
}
