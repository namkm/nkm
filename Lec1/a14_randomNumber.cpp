
#include <iostream>
#include <cstdlib>
using namespace std;

void generaterandomnumber(int *, int *);

int main() {
	int sum,number1,number2,max,countwin=0,run;
	cin>>sum;
	for (run=0;run<sum;run++)
	{
		generaterandomnumber(&number1,&number2);
		if (number1>=50)
		{
			max=number1;
			if (max>number2)
				countwin++;
		}
		else
		{
			max=number2;
			if (max>number1)
				countwin++;
		}
	}
	cout<<"Win: "<<countwin<<" times"<<endl;
	cout<<"SumTurn: "<<sum<<" times"<<endl;
	return 0;
}

void generaterandomnumber(int *number1 , int *number2)
{
	*number1=rand() %100 +1;
	*number2=rand() %100 +1;
}