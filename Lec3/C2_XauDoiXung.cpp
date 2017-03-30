#include <iostream>
#include <cstring>
using namespace std;

void input(char *,int *);
void check(char *,int);

int main ()
{
	char a[100];
	int n;
	input(a,&n);
	check(a,n);
	return 0;
}

void input(char *a,int *n)
{
	cin>>a;
	*n=strlen(a);
}

void check(char *a,int n)
{
	int i=0,j=n-1;
	bool OK=true;
	do
	{
		if (*(a+i)!=*(a+j))
			OK=false;
		i++;
		j--;
	} while ((*(a+i)==*(a+j)) && i<j);
	if (OK==true)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}