#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void bubble_sort(int arr[], int len);
//void showArray(int arr[],int k){//顯示arrary的值 
//	
//	for(int j = 0;j<k;j++){
//		cout<<arr[j]<<" ";
//	}
//	cout<<endl;
//}

int main(void)
{	
	int n,k;
	while(cin>>n>>k){
		int arr[n];//arr儲存選手等級 
		int i;
		for(i =0;i<n;i++){
			cin>>arr[i];
		}
		
		int Length_arr  = sizeof(arr)/sizeof(int);
		bubble_sort(arr,Length_arr);
		
		int arr_minus[n-1];
		for(int j = 0;j<n-1;j++){
			arr_minus[j] = abs(arr[j] - arr[j+1]);
		}
		
		int Length  = sizeof(arr_minus)/sizeof(int);
		bubble_sort(arr_minus,Length);
		
		int sum = 0;
		for(int j = 0;j<k;j++){
			sum = sum + arr_minus[j];
		}
		cout<<sum<<endl;
	}
    return 0;
}
void bubble_sort(int arr[], int len) {//泡沫排序法 
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

