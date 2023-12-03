#include <iostream>

using namespace std;

void task6() {
    int n, k, ret=-1;
    cin >> n;
    int nums[n], in=n;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        if(nums[i]==k){
            ret=1;
            in=i;
            break;
        }
    }
    cout << ret << " " << in;
}