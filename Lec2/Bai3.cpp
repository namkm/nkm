#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if(a + b < c ||	a + c < b || b + c < a){
		cout << a << ", " << b << ", " << c << " khong la canh cua 1 tam giac" << endl;
	} else{
		cout << "Chu vi= " << a+b+c << endl;
		if((a == b) && (b == c))
			cout << "Day la tam giac deu" << endl;
		else if(((a==b) && (a!=c)) ||
				((a==c) && (a!=b)) ||
				((b==c) && (b!=a)))
			cout << "Day la tam giac can" <<endl;
		else if((sqrt((a*a)+(b*b)) == c) ||
				(sqrt((c*c)+(b*b)) == a) ||
				(sqrt((a*a)+(c*c)) == b))
			cout << "Day la tam giac vuong" <<endl;

	}
}
