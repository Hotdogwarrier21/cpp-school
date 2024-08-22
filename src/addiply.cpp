#define _USE_MATH_DEFINES

#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int runs;
    cin >> runs;
    for (int i = 0; i < runs; i++){

        int num1;
        int num2;
        cin >> num1;
        cin >> num2;

        cout << (num1+num2) << " " << (num1*num2) << "\n";

    }
}