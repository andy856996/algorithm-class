#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <bits/stdc++.h>
using namespace std;
 
int n, k, h[200005], w[50005];
 
int main(){
    
    while(cin >> n >> k){
	    int l = 1, r = 0;
	    for (int i = 1; i <= n; i++){
	        cin >> h[i];
	        r = max(r, h[i]);//��X�̤j�� 
	    }
	    r++;//����̤j�ȭn�[1 
	    for (int i = 1; i <= k; i++){
	        cin >> w[i];
	    }
	    //h���U��O����,w���U�����e�� ,r���̤j����(+1),l���x�s�̤j�i�H�i�K�������� 
	    //n����O�Ӽ�,k�� �����Ӽ� 
	    while (r-l > 1){
	        int mid = (l+r)/2;
	        int cnt = 0, now = 1;
	        bool flag = false;
	        for (int i = 1; i <= n; i++){
	            if (h[i] >= mid){
	                cnt++;
	                if (cnt >= w[now]){
	                    cnt = cnt - w[now];
	                    if (now == k){
	                        flag = true;
	                        break;
	                    }
	                    now++;
	                }
	            }
	            else cnt = 0;
	        }
	        if (flag) l = mid;
	        else r = mid;
	    }
	    cout << l << "\n";
	}
}
