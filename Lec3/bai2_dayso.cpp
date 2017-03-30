#include <iostream>

using namespace std;

int main(){
    int n, i, max , min , a[n], sum, count;
    cin >> n;
    if(n<=0){
        return 0;
    } else{
        for(i=0; i<n; i++)
            cin >> a[i];
    }
    
    min = a[0];
    for(i=0; i<n; i++){
        
        if(min > a[i]){
            min = a[i];
        }
    }
    cout << "GTNN la " << min << endl;
    
    max = a[0];
    
    for(i=0; i<n; i++){
        
        if(max < a[i]){
            max = a[i];
        }
    }
    cout << "GTLN la " << max <<endl;
    sum = 0;
    for(i=0; i<n; i++){
        if(a[i] % 2 == 0)
            sum += a[i];
    }
    cout << "Tong cac phan tu chan " << sum << endl;
    count = 0;
    for(i=0; i<n; i++){
        if(a[i] % 2 != 0)
            count ++;
    }
    cout << "Tong cac phan tu le " << count << endl;
}
