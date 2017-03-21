#include <iostream>
using namespace std;
int main(){
    string n1 = "a", n2 = "b", n3;
    int n;
    cout << "Nhap so phan tu ";
    cin >> n;
    cout << n1 << " " << n2 << " ";
    for(int i = 2; i < n; i++ ){
        n3 = n2 +n1;
        cout << n3 << " ";
        n1= n2;
        n2 = n3;
    }
    return 0;
}
