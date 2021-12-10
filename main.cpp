#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    // punto 1: definisco la dimensione dell'array
    int a=0;
    float num=0;
    cin >> a;
    if (a<=0){
        return 0;
    }
// punto 3: rende da tastiera i valori da salvare all’interno dell’array
float numeri[a];
    for (int i = 0; i<a; i++){
        num=0;
        cin >> num;
        numeri [i] = num;
    }
cout << num_maggiore(numeri, a)<< endl;
    return 0;
}
