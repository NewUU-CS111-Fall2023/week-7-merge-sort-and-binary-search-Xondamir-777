#include <iostream>

using namespace std;

void task9() {
    int n, k, i=1, x=0, d=0;
    cin >> n >> k;
    int num[n];
    for(int d=0; d<n; d++){
        cin >> num[d];
    }
    while(i<=k){
        d++;
        if (num[x]!=d){
            i++;
            continue;
        }
        x++;
    }
    cout << d;
}