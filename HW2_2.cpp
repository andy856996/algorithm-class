#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
using namespace std;
int sum_array(int arr[],int k){
	int sum_posterPassArray = 0;
	for(int i  = 0;i<k;i++){
		sum_posterPassArray = sum_posterPassArray + arr[i];
	}
	return sum_posterPassArray;
}
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
		int Length_poster  = sizeof(poster)/sizeof(int);
		
		int posterPassArray[Length_poster], counter;
	    for(counter = 0 ; counter < Length_poster ; counter++)
	    {
	        posterPassArray[counter] = 0;
	    }
		
		//�s�W�ܼ� board_tmp �M board�@�� 
		int board_tmp[n];
		for(int i = 0;i < n;i++){
			board_tmp[i] = board[i];
		}
		bubble_sort(board_tmp,Length_board);//���O���׶��ǰ��Ƨ� 
		
		int board_tmp1[n];
		for(int i = 0;i < n;i++){
			board_tmp1[i] = board_tmp[i];
		}
		
		//½�� board �Ѥj��p 
		for(int i = 0;i < n;i++){
			board_tmp[i] = board_tmp1[Length_board-i-1];
		}

		//�����e�[�` 
		int sum =0;
		for(int i = 0 ;i < p;i++){
			sum = sum + poster[i];
		}
		
		if(n==0 || p==0 || n<sum){
			cout<<0<<endl;
			continue;
		}
		int pass = 0;
		int max = 0;	
		for(int i = 0;i < Length_board;i++){
			max = board_tmp[i];
			if(!(board_tmp[sum-1] >= max)){
				continue;
			}
			if(i!=0){
				if(max == board_tmp[i-1]){
					continue;
				}
			}
			//cout<<"max:"<<max<<endl;
			int j = 0;
			while(j<Length_board){//�qboard���Y�}�l�j�M 
				if(board[j] >= max){//�p�G board ���Ȥj�󵥩�max 
					for( int ii = 0 ;ii<Length_poster;ii++){//�qposter���Y�}�l�j�M 
						pass = 0;
						for(int jj = 0;jj<poster[ii];jj++){
							if(j+1 > Length_board || board[j] < max){//�p�Gj�W�Xboard������ 
								posterPassArray[ii] = 0;
								pass = 0;
								goto start;
								break;
							}
							if(board[j] >= max){
								pass ++;
								if(pass == poster[ii]){
									posterPassArray[ii] = poster[ii];
								}
								if(sum_array(posterPassArray,Length_poster) == sum){
									ii=Length_poster;
									j=Length_board;
									i = Length_board;
									break;
								}
							}
							//j = j + 1;
						}
					}
				}
				start:
				j++;
			}
		}
		cout<<max<<endl;

	
	}
    return 0;
}


