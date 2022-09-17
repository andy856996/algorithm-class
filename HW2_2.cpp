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
int main(void)
{	
	int n = 0,p = 0;
	while(cin>>n>>p){
		
		int board[n];
		for(int i =0;i<n;i++){
			cin>>board[i];
		}
		
		int poster[p];
		for(int i =0;i<p;i++){
			cin>>poster[i];
		}
		
		int Length_board  = sizeof(board)/sizeof(int);
		bubble_sort(board,Length_board);//對木板高度順序做排序 
		
		//新增變數 board_tmp 和 board一樣 
		int board_tmp[n];
		for(int i = 0;i < n;i++){
			board_tmp[i] = board[i];
		}
		//翻轉 board 由大到小 
		for(int i = 0;i < n;i++){
			board[i] = board_tmp[Length_board-i-1];
		}
		//海報寬加總 
		int sum =0;
		for(int i = 0 ;i < p;i++){
			sum = sum + poster[i];
		}
		//計算海報張貼最大高度
		int max_high = board[sum-1] ;
		//輸出
		cout<<max_high<<endl;
	}
    return 0;
}


