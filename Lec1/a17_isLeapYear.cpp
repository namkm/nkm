#include <iostream>
using namespace std;
void isLeapYear(int n){
	if((n % 4 == 0 && n % 100 != 0) ||
		n % 400 == 0){
		cout << "True" << endl;
	} else{
		cout << "False" << endl;
	}
}
int main(){
	int x;
    cin >> x;
	isLeapYear(x);
} 
