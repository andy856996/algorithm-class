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
		int poster[p];
		
		
		for(int i =0;i<n;i++){
			cin>>board[i];
		}
		for(int i =0;i<p;i++){
			cin>>poster[i];
		}
		
//		if(n==0&&p==0){
//			char ch;
//			scanf("%c%*c", &ch);
//		}
//		if(p==0&&n==0){
//			char ch1;
//			scanf("%c", &ch1);
//		}else if(p==0&&n!=0){
//			char ch2;
//			scanf("%c%*c", &ch2);
//		}
		
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
		
		if(n==0||p==0){
			cout<<0<<endl;
			continue;
		}
		
		//�����e�[�` 
		int sum =0;
		for(int i = 0 ;i < p;i++){
			sum = sum + poster[i];
		}
		//�p������i�K�̤j����
		if(sum != 0 && sum-1<=Length_board){
			int max_high = board[sum-1];
			cout<<max_high<<endl;
		}else{
			cout<<0<<endl;
		}
	}
    return 0;
}


