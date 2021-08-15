#include <iostream>
#include <math.h>
#include <string.h>
//#include <iomanip>
using namespace std;



int main()
{	
	int n,step;
	while(cin>>n && n!=0){
		step = 0;
		while(n != 1){
			step++;
			if(n%2 == 0){
				n /= 2;
			}else{
				n = n*3+1;
				n /= 2;
			}
		}
		cout<<step<<endl;
	}
    return 0;
}
