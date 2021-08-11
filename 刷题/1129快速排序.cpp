#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

void QSort(int num[],int low,int high);
int Partition(int num[11],int low,int high);

int Partition(int num[11],int low,int high){
	//ѡ�����ĵ�Ϊlow 
	int pivotkey = num[low];
	while(low<high){
		//�����ֵǰ�� 
		while(low<high && num[high] <= pivotkey){
			high--;
		}		
		num[low] = num[high];//num[low]����զpivotkey�� num[high]��ֵ�ճ��� 
		
		//��С��ֵ���
		while(low<high && num[low] >= pivotkey){
			low++;
		}		
		num[high] = num[low];
	} 
	//low==high��������ֵ���꣬���λ����Ϊ���ĵ�
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
