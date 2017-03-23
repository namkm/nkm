#include <iostream>
#include <cmath>
using namespace std;

void once(int);
void tens_once(int,int);
void hundred(int,int,int);
void thousand(int,int,int);
void million(int,int,int);
void nametoenglish(int);

int main()
{
	int n,i=1,a[10];
	for (i=0;i<10;i++)
		a[i]=0;
	i=0;
	cin>>n;
	if (n==0)
		cout<<"zero";
	else if (n>0)
	{
		nametoenglish(n);
	}
	else
	{
		cout<<"negative ";
		nametoenglish(abs(n));
	}
}

void once(int a)
{
	switch (a)
	{
		case 1:
			cout<<"one";
			break;
		case 2:
			cout<<"two";
			break;
		case 3:
			cout<<"three";
			break;
		case 4:
			cout<<"four";
			break;
		case 5:
			cout<<"five";
			break;
		case 6:
			cout<<"six";
			break;
		case 7:
			cout<<"seven";
			break;
		case 8:
			cout<<"eight";
			break;
		case 9:
			cout<<"nine";
			break;
	}
}

void tens(int a)
{
	switch (a)
	{
		case 2:
			cout<<"twenty";
			break;
		case 3:
			cout<<"thirty";
			break;
		case 4:
			cout<<"fourty";
			break;
		case 5:
			cout<<"fifty";
			break;
		case 6:
			cout<<"sixty";
			break;
		case 7:
			cout<<"seventy";
			break;
		case 8:
			cout<<"eighty";
			break;
		case 9:
			cout<<"ninety";
			break;
	}
}

void tens_once(int a,int b)
{
	switch (a)
	{
		case 1:
			switch (b)
			{
				case 0:
					cout<<"ten";
					break;
				case 1:
					cout<<"eleven";
					break;
				case 2:
					cout<<"twelve";
					break;
				case 3:
					cout<<"thirteen";
					break;
				case 4:
					cout<<"fourteen";
					break;
				case 5:
					cout<<"fifteen";
					break;
				case 6:
					cout<<"sixteen";
					break;
				case 7:
					cout<<"seventeen";
					break;
				case 8:
					cout<<"eighteen";
					break;
				case 9:
					cout<<"nineteen";
					break;
			}
		default:
			if (a!=1)
			{
				tens(a);
				cout<<" ";
				once(b);
			}
	}
}

void hundred(int a,int b,int c)
{
	once(a);
	cout<<" hundred ";
	tens_once(b,c);
}

void thousand(int a,int b,int c)
{
	if (a==0 && b==0 && c!=0)
		once(c);
	if (a==0 && b!=0)
		tens_once(b,c);
	if (a!=0)
		hundred(a,b,c);
	cout<<" thousand ";
}

void million(int a,int b,int c)
{
	if (a==0 && b==0 && c!=0)
			once(c);
		if (a==0 && b!=0)
			tens_once(b,c);
		if (a!=0)
			hundred(a,b,c);
		cout<<" million ";
}

void nametoenglish(int n)
{
	int i=0,a[10];
	while (n>0)
	{
		a[i]=n%10;
		n/=10;
		i++;
	}
	if (i==1)
		once(a[0]);
	if (i==2)
		tens_once(a[1],a[0]);
	if (i==3)
		hundred(a[2],a[1],a[0]);
	if (i>=4 && i<=6)
	{
		thousand(a[5],a[4],a[3]);
		if (a[2]!=0)
			hundred(a[2],a[1],a[0]);
		else if (a[2]==0 && a[1]==0)
			once(a[0]);
		else if (a[2]==0 && a[1]!=0)
			tens_once(a[1],a[0]);
	}
	if (i>=7 && i<=9)
	{
		million(a[8],a[7],a[6]);
		if (a[5]!=0 || a[4]!=0 || a[3]!=0)
			thousand(a[5],a[4],a[3]);
		if (a[2]!=0)
			hundred(a[2],a[1],a[0]);
		else if (a[2]==0 && a[1]==0)
			once(a[0]);
		else if (a[2]==0 && a[1]!=0)
			tens_once(a[1],a[0]);
	}
}