/**
 *  用小于等于n元去买100只鸡，大鸡5元/只，小鸡3元/只,还有1/3元每只的一种小鸡，
 * 分别记为x只,y只,z只。编程求解x,y,z所有可能解
**/
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
	int n,x,y,z;
    while(cin>>n){
        cin>>n;
        for(int x=0;x<=n/5;x++){
            for(int y=0;y<=n/3;y++){
                for(int z=0;z<=100;z++){
                    if(5*x+3*y+z*1.0/3<=n && x+y+z==100){//z*1.0/3
                        cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
