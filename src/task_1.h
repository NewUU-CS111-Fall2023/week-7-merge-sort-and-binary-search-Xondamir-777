#include <iostream>

using namespace std;

int dd(int arr[], int l){
    if(l-2==0){
        return arr[0]+arr[1];
    }
    int index;
    int med[l-2];
    int arr2[l-1];
    for(int i =2; i<l; i++){
        if((arr[i-2]>=arr[i-1] and arr[i-1]>=arr[i]) or (arr[i-2]<=arr[i-1] and arr[i-1]<=arr[i]))
            index=i-1;
        else if((arr[i-1]>=arr[i] and arr[i]>=arr[i-2]) or (arr[i-1]<=arr[i] and arr[i]<=arr[i-2]))
            index=i;
        else{ index=i-2;}
        med[i-2]=index;
    }

    int minin=med[0];
    for(int e=1; e<l-2; e++){
        if(arr[med[e]]<arr[minin]){
            minin=e;
        }
    }
    int i=0;
    for(int e=0; e<l; e++){
        if(e==minin)
            continue;
        arr2[i]=arr[e];
        i++;
    }
    return dd(arr2, l-1);
}

void task1() {
    int n;
    cin >> n;
    int res[n];
    for(int i = 0; i<n; i++){
        int c;
        cin >> c;
        int arr[c];
        for(int x = 0; x<c; x++) {
            cin >> arr[x];
        }
        res[i]=dd(arr, c);
    }
    for(int el:res){
        cout<< el << endl;
    }
    return 0;
}
