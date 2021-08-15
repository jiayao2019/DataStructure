/*
设a、b、c均是0到9之间的数字，abc、bcc是两个三位数，
且有：abc+bcc=532。求满足条件的所有a、b、c的值。
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int a,b,c,abc,bcc;
    for(int a=0;a<10;a++){
        for(int b=0;b<10;b++){
            for(int c=0;c<10;c++){
                abc = a*100+b*10+c;
                bcc = b*100+c*10+c;
                if(abc+bcc == 532){
                    cout<<a<<" "<<b<<" "<<c<<endl;
                }
            }
        }
    }
    return 0;
}
