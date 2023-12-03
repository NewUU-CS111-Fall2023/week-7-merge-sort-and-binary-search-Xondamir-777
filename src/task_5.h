#include <iostream>

using namespace std;

void task5() {
    int n, k, d=0;
    cin >> n;
    int nums[n];
    int arr[n];
    for(int r=0; r<n; r++){
        arr[r] =0;
    }

    for (int i=0; i<n; i++){
        cin >> nums[i];
        for(int x=0; x<i ; x++){
            if(nums[x] == nums[i]) {
                arr[d] = nums[i];
                d++;
            }
        }

    }
    cin >> k;
    for(int a=0; a<n; a++){
        int min=a;
        for(int r=a+1; r<n; r++){
            if(arr[min]>arr[r])
                min=r;
        }
        int m = arr[min];
        arr[min]=arr[a];
        arr[a]=m;
    }
    for(int r=n-k; r<n; r++){
        cout << arr[r] << " ";
    }

}