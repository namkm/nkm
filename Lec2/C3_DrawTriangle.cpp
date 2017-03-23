#include <iostream>
using namespace std;

int main(){
	int n, i, j;
	cin >> n;
	for(i=1; i<n; i++){
		for(j=0; j<n-i; j++)
			cout <<" ";
		for(j=n-i; j<n+i-1;j++)
			cout <<"*";
			cout << endl;
	}
}
