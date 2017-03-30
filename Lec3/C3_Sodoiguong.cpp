#include <iostream>
using namespace std;

bool check(int);
void input2number(int *,int *);
void inputtestcase(int*,int*,int,int);
void output(int *,int);

int main() {
	int n,a,b,array[100];
	inputtestcase(array,&n,a,b);
	output(array,n);
	return 0;
}

bool check(int n)
{
	int i=0,a[4],left,right;
	bool OK=true;
	while (n>0)
	{
		a[i]=n%10;
		n/=10;
		i++;
	}
	left=0; right=i-1;
	do
	{
		if (a[left]!=a[right])
			OK=false;
		left++;
		right--;
	} while ((a[left]==a[right]) && left<right);
	return OK;
}

void input2number(int *number1,int *number2)
{
	cin>>*number1>>*number2;
}

void inputtestcase(int *array,int *testcase,int number1,int number2)
{
	int i,count,index,j=0;
	cin>>*testcase;
	for (i=0;i<*testcase;i++)
	{
		count=0;
		input2number(&number1,&number2);
		for (index=number1;index<=number2;index++)
			if (check(index)==true)
				count++;
		*(array+j)=count;
		j++;
	}
}

void output(int *array,int testcase)
{
	int i;
	for (i=0;i<testcase;i++)
		cout<<*(array+i)<<endl;
}