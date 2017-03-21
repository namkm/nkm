#include <iostream> 
#include <cmath>
using namespace std;
double TriangleArea(double base1, double base2, double base3){
	double s, Area;
	s = (base1 + base2 +base3)/2;
    Area = sqrt((s*(s - base1) * (s - base2) * (s - base3)));
	cout << "Triangle area is " << Area << endl;
    return Area;
}
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if((a + b < c) ||
       (a + c < b) ||
       (b + c < a)){
        cout << "ERROR" << endl;
    } else{
	TriangleArea(a,b,c);
    }
}
