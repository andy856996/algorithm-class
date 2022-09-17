#include <iostream>
using namespace std;
int main()
{	
	int number;
	int count =  0;
	cin >> number;
	while(1){
		count = count + 1;
		if(number == 1){
			cout << count << endl;
			break;
		}
		if (number%2 == 1){
			number = 3* number  + 1;
		}else{
			number = number/ 2;
		}
		
	}
    return 0;
}