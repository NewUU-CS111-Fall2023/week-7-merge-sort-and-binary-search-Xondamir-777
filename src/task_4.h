#include <iostream>

using namespace std;

void task4() {
    int n, k;
    cin>> n>> k;
    int matrix[n][n];
    int arr[n*n];
    bool change= false;
    for(int c=0; c<n; c++){
        for(int r=0; r<n; r++){
            cin>> matrix[c][r];
            if (c-1>=0 && r-1>=0){
                if(!(matrix[c-1][r]<=matrix[c][r] && matrix[c][r-1]<=matrix[c][r])){
                    change= true;
                }
            }

            arr[c*n+r]=matrix[c][r];
        }
    }
    for(int a=0; a<n*n; a++){
        int min=a;
        for(int r=a+1; r<n*n; r++){
            if(arr[min]>arr[r])
                min=r;
        }
        int m = arr[min];
        arr[min]=arr[a];
        arr[a]=m;
    }

    if(change){
        for(int c=0; c<n; c++){
            for(int r=0; r<n; r++){
                matrix[c][r]=arr[c*n+r];
            }
        }
    }
    cout << arr[k-1];
}