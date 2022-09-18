#include <iostream>
using namespace std;
int Cycle_Length(int number);
int main()
{	
	int number;
	while(cin >> number){
		cout<<Cycle_Length(number)<<endl;
	}
    return 0;
}
int Cycle_Length(int number){
	int count =  0;
	while(1){
		count = count + 1;
		if(number == 1){
			//cout << count << endl;
			break;
		}
		if (number%2 == 1){
			number = 3* number  + 1;
		}else{
			number = number/ 2;
		}
		
	}
	return count;
}
