#include <iostream>

using namespace std;

int main(){
    int n, i, a[n], count = 0, sum = 0;
    float gttb, ps;
    cin >> n;
    if( n<= 0){
        return 0;
    }else{
        for(i=0; i<n; i++){
            cin >> a[i];
            count += a[i];}
    
        gttb = (float) count/n;
        cout << "Gia tri trung binh la " << gttb <<endl;
        for(i=0; i<n; i++){
            sum += (a[i]-gttb)*(a[i]-gttb);
        }
        ps = (float) sum/n;
        cout << "Phuong sai la " << ps << endl;
    }
}
