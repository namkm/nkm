
#include <iostream>

using namespace std;

void input(int *);
int factorial(int );

int main()
{
    int n,i,j;
    input(&n);
    for (i=0;i<n;i++)
        {
            for (j=0;j<=i;j++)
                cout<<factorial(i)/((factorial(i-j))*factorial(j))<<" ";
            cout<<endl;
        }
    return 0;
}

void input(int *n)
{
    cin>>*n;
}

int factorial(int n)
{
    int i,p=1;
    for (i=1;i<=n;i++)
        p*=i;
    return p;
}