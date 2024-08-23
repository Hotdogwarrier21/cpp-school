#define _USE_MATH_DEFINES

#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int runs;
    cin >> runs;
    for (int i = 0; i < runs; i++){

        int num;
        cin >> num;
        if (num < 0){
            cout << "NEGATIVE\n";
        } else {
            cout << "POSITIVE\n";
        }

    }
}