#include <iostream>

using namespace std;

void task2() {
    int n, beauty=0, max, min;
    cin >> n;
    int Y[n];
    for(int i = 0; i<n; i++){
        cin >> Y[i];
    }
    max= min = 0;
    for(int i = 0; i<n; i++){
        if (Y[i]>=Y[max]){
            max=i;
        }
        if (Y[i]<=Y[min]){
            min=i;
        }
    }

    int d=Y[max];
    Y[max]=Y[min];
    Y[min]=d;

    for(int e=1; e<=n; e++){
        beauty += (abs((Y[e-1]-e)));
    }
    cout << beauty << endl;
    return 0;
}
