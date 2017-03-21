#include <iostream>
using namespace std;

int main(){
	int n, i;
	for(i = 0; ; i++){
		cin >> n;
		if(n == -1){
			cout << "Bye" << endl;
			break;
		} else if(n>0 && n%5==0){
			cout << n/5 << endl;
		} else
			cout << -1 << endl;
	}
}
