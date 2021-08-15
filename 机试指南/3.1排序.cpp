#include <iostream>
#include <math.h>
#include <string.h>
//#include <iomanip>
using namespace std;


int main()
{	
	int n;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(num[j] > num[j+1]){
				int temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<num[i]<<" ";
	}
    return 0;
}
