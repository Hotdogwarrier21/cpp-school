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

        string color;
        cin >> color;

        if (color == "red"){
            cout << "No colors need to be mixed to make red.\n";
        } else if (color == "yellow"){
            cout << "No colors need to be mixed to make yellow.\n";
        } else if (color == "blue"){
            cout << "No colors need to be mixed to make blue.\n";
        } else if (color == "red-violet"){
            cout << "In order to make red-violet, blue and red must be mixed.\n";
        } else if (color == "violet"){
            cout << "In order to make violet, blue and red must be mixed.\n";
        } else if (color == "blue-violet"){
            cout << "In order to make blue-violet, blue and red must be mixed.\n";
        } else if (color == "blue-green"){
            cout << "In order to make blue-green, blue and yellow must be mixed.\n";
        } else if (color == "green"){
            cout << "In order to make green, blue and yellow must be mixed.\n";
        } else if (color == "yellow-green"){
            cout << "In order to make yellow-green, blue and yellow must be mixed.\n";
        } else if (color == "yellow-orange"){
            cout << "In order to make yellow-orange, red and yellow must be mixed.\n";
        } else if (color == "orange"){
            cout << "In order to make orange, red and yellow must be mixed.\n";
        } else {
            cout << "In order to make red-orange, red and yellow must be mixed.\n";;
        }

    }
}