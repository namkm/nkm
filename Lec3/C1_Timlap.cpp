
#include <iostream>
using namespace std;
string Check(int a[], int n){
    int i, j;
    bool OK = false;
    for(i=0; i < n-1; i++)
        for(j=i+1; j<n; j++)
            if(a[i] == a[j]){
                OK = true;
            }
    if(OK==true)
        return "Yes";
    else
        return "No";
    
}
int main(){
	int n, i, j, a[10000];
	cin >> n;
	if(n<=0){
		return 0;
	}
	else{
        for(i=0; i<n; i++)
		cin >> a[i];
	}
    cout << Check(a,n)<< endl;
    return 0;
}