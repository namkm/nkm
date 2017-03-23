#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, count;
	cin >> n;
	if(n<=1) cout << "no" <<endl;
	else{
		for(int i = 2; i <= sqrt(n); i++){
			count = 1;
			if(n%i==0){
				count = 0;
			}
		}
		if(count == 1)
			cout <<"yes" <<endl;
		else	
			cout<<"no" <<endl;
	}
}
