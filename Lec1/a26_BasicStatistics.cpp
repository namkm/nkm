#include <iostream>
using namespace std;

int main(){
	int n, i, max,a[100000], min, s = 0;
	cin >> n;
	if(n <= 0){
        return 0;
	} else{
        for(i = 0; i < n ; i++){
			cin >> a[i];
            s += a[i];}
	}
	max = a[0];
	for(i = 0; i < n ; i++){
		if(a[i] > a[0])
			max = a[i];
	}
	min = a[0];
	for(i = 0; i < n ; i++){
		if(a[i] < a[0])
			min = a[i];
	}
	cout <<(float)s/n << endl;
	cout << max << endl;
	cout << min << endl;
}

