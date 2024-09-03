#define _USE_MATH_DEFINES

#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int runs;
    cin >> runs;
    string burn;
    getline(cin, burn);
    for (int i = 0; i < runs; i++){

        string in;
        getline(cin, in);
        string phonenum = in.substr(0, 10);
        string condition = in.substr(11);

        if (condition == "PERIODS"){
            cout << in.substr(0,3) << "." << in.substr(3,3) << "." << in.substr(6,4) << "\n";
        } else if (condition == "DASHES"){
            cout << in.substr(0,3) << "-" << in.substr(3,3) << "-" << in.substr(6,4) << "\n";
        } else {
            cout << "(" << in.substr(0,3) << ") " << in.substr(3,3) << "-" << in.substr(6,4) << "\n";
        }
        // cout << phonenum << "\n";
        // cout << condition << "\n";

    }
}