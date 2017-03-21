#include <iostream>
using namespace std;

int main(){
	int i;
	for(i=0; i<24; i++){
		if(i==0){
			cout << i+12 << " midnight" << endl;
		} else{
			if(i==12){
				cout << i << " noon" << endl;
			} else if(i<12) {
				cout << i <<"am" <<endl;
			} else{
				cout <<i-12<<"pm" <<endl;
			}
		}
	}
}