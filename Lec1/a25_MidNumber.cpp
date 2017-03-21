#include <iostream>
using namespace std;

void swap(float *,float *); // swap 2 vars

int main() {
	float a,b,c,d,e,mid;
	cin>>a>>b>>c>>d>>e;
	if (a>e) swap(&a,&e);
	if (b>d) swap(&b,&d);
	if (a>c) swap(&a,&c);
	if (b>c) swap(&b,&c);
	if (c>e) swap(&c,&e);
	if (c>d) swap(&c,&d);
	cout<<c<<endl;
	return 0;
}

void swap(float *a,float *b)
{
	float change;
	change=*a;
	*a=*b;
	*b=change;
}

