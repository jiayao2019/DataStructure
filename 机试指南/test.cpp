#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{	
	string pwd;
	getline(cin,pwd);
	for(int i=0;i<pwd.size();i++){
		if(pwd[i]>='a'&&pwd[i]<='z' || pwd[i]>='A'&&pwd[i]<='Z'){
			if(pwd[i] == 'z') pwd[i] = 'a';
			if(pwd[i] == 'Z') pwd[i] = 'A';
			else pwd[i] += 1;
		}
		
	}
	cout<<pwd;
    return 0;
}
