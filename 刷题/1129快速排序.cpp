#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

void QSort(int num[],int low,int high);
int Partition(int num[11],int low,int high);

int Partition(int num[11],int low,int high){
	//选定中心点为low 
	int pivotkey = num[low];
	while(low<high){
		//将大的值前放 
		while(low<high && num[high] <= pivotkey){
			high--;
		}		
		num[low] = num[high];//num[low]保存咋pivotkey中 num[high]的值空出来 
		
		//将小的值后放
		while(low<high && num[low] >= pivotkey){
			low++;
		}		
		num[high] = num[low];
	} 
	//low==high，则所有值放完，这个位置则为中心点
	num[low] = pivotkey;
	return low; 
}
void QSort(int num[],int low,int high){
	int pivotloc;
	if(low<high){
		pivotloc = Partition(num,low,high);
		QSort(num,low,pivotloc-1);
		QSort(num,pivotloc+1,high);
	}
}

int main()
{
	// 
	int num[10],low,high;
	for(int i=0;i<10;i++){
		cin>>num[i];
	}
	QSort(num,0,9);
	
	for(int i=0;i<10;i++){
		cout<<num[i]<<" ";
	}
    return 0;
}
