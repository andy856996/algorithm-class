#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
using namespace std;
void showArray(int arr[],int k){//顯示arrary的值 
	
	for(int j = 0;j<k;j++){
		cout<<arr[j]<<" ";
	}
	cout<<endl;
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
int main()
{	
	int arr[5] = {1,2,3,4,5};
	bubble_sort(arr,sizeof(arr)/sizeof(arr[0]));
	
    return 0;
}


