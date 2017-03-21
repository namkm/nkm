#include <iostream>
#include <cmath>
using namespace std;
double EculidDistance(int x1, int y1, int x2, int y2){
	cout << "A(" << x1 << ";" << y1 << ")" << endl;
	cout << "B(" << x2 << ";" << y2 << ")" << endl;
	cout << "EculidDistance between A and B is " <<
			sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) << endl;

}
int main(){
	int x, y, z, t;
	cin >> x >> y >> z >> t;
	EculidDistance(x,y,z,t);
}