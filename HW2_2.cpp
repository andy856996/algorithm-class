#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
using namespace std;
void showArray(int arr[],int k){//���arrary���� 
	
	for(int j = 0;j<k;j++){
		cout<<arr[j]<<" ";
	}
	cout<<endl;
}
void bubble_sort(int arr[], int len) {//�w�j�ƧǪk 
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
		bubble_sort(board,Length_board);//���O���׶��ǰ��Ƨ� 
		
		//�s�W�ܼ� board_tmp �M board�@�� 
		int board_tmp[n];
		for(int i = 0;i < n;i++){
			board_tmp[i] = board[i];
		}
		//½�� board �Ѥj��p 
		for(int i = 0;i < n;i++){
			board[i] = board_tmp[Length_board-i-1];
		}
		//�����e�[�` 
		int sum =0;
		for(int i = 0 ;i < p;i++){
			sum = sum + poster[i];
		}
		//�p������i�K�̤j����
		int max_high = board[sum-1] ;
		//��X
		cout<<max_high<<endl;
	}
    return 0;
}


