#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c;
	cin>>a;
	cin>>b;
	c=(int)((float)(a+b)/2+abs((float)(a-b)/2));
	cout<<c;
	return 0;
}