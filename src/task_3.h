#include <iostream>

using namespace std;

void task3() {
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int x, y, l;
        cin >> x >> y;
        l=x+y;
        int arr[l];
        for(int d = 0; d<l; d++) {
            cin >> arr[d];
        }
        for(int a=0; a<l-1; a++){
            int min=a;
            for(int r=a+1; r<l; r++){
                if(arr[min]<arr[r])
                    min=r;
            }
            int m = arr[min];
            arr[min]=arr[a];
            arr[a]=m;
        }
        for(int el:arr){
            cout<< el << " ";
        }
        cout << endl;
    }
}
