#include <iostream>
using namespace std;

int UCLN(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
            return a;
    else
    {
    int c;
    do
    {
        c=a%b;
        a=b;
        b=c;
    }while(c!=0);
    return a;
    }
   
}
int main(){
    int x, y, z;
    cin >> x >>y;
    z= UCLN(x,y);
    cout << z;
}