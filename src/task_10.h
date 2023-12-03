#include <iostream>

using namespace std;

void task10() {
    // Example usage:
    int n, k, i=0, d=0;
    cin >> n >>k;
    while(i<k){
        d++;
        if(n%d==0){
            i++;
        }
        if(d>n){
            d=-1;
            break;
        }
    }
    cout << d;
}
