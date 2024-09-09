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
        int length;
        cin >> length;
        vector<string> countries(length);
        for (int i = 0; i < length; i++){
            cin >> countries[i];
        }

        sort(countries.begin(), countries.end());

        for (string word: countries){
            cout << word << "\n";
        }
    }
}