#include <iostream>
#include <vector>

using namespace std;

void task8() {
    int n,x, l=0;
    cin >> n;
    int num[n];
    for (int i=0;i<n; i++){
        num[i]=i;
    }
    int answers[n];

    for (int i=0;i<n; i++){
        cin >> x;

        answers[i]=x;
        if(x>=n){
            if(l!=0){
                l--;
            }
            break;
        }
        l++;
    }
    x=0;
    for(int i=0; i<n-l; i++){
        if(answers[x]==num[i]){
            x++;
            continue;
        }
        cout << num[i] << " ";
    }
}