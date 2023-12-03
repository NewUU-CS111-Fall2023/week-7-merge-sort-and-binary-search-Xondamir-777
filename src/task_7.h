#include <iostream>

using namespace std;

int recursivePow(int x, int n ){
    if(n<=1){
        return x;
    }
    x = x * recursivePow(x, n-1);
    return x;
}