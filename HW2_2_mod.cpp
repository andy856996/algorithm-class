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
	        r = max(r, h[i]);//块程 
	    }
	    r++;//程璶1 
	    for (int i = 1; i <= k; i++){
	        cin >> w[i];
	    }
	    //hれ狾蔼,w厨糴 ,r程蔼(+1),l纗程眎禟厨 
	    //nれ狾计,k 厨计 
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
