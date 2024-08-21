#define _USE_MATH_DEFINES

#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int runs;
    cin >> runs;
    for (int i = 0; i < runs; i++){

        int rad;
        cin >> rad;
        float area = M_PI * (rad*rad);
        float side = sqrt(area);
        cout << side << "\n";

    }
}