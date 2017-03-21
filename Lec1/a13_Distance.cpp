#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x, y, z;
	cin >> x >> y;
	z = sqrt(x*x+y*y);
	cout << "Distance from A(" << x << ";" << y << ") to O (0;0) is " << z <<endl;
}
