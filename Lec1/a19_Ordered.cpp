#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    bool b;
    cin>>x;
    cin>>y;
    cin>>z;
    if ((x<=y && y<=z) || (x>=y && y>=z))
        b=true;
    else
        b=false;
    cout<<b;
    return 0;
}
