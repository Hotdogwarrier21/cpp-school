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
        if (in.length() == 3) {
            if (in.substr(0,1) == "1"){
                cout << "1st\n";
            } else if (in.substr(0,1) == "2"){
                cout << "2nd\n";
            } else if (in.substr(0,1) == "3"){
                cout << "3rd\n";
            } else {
                cout << in.substr(0,1) << "th\n";
            }
        } else {
            int num = stoi(in.substr(0,2));
            if (num < 20){
                cout << num << "th\n";
            } else if (in.substr(1,1) == "1"){
                cout << num << "st\n";
            } else if (in.substr(0,1) == "2"){
                cout << num << "nd\n";
            } else if (in.substr(1,1) == "3"){
                cout << num << "rd\n";
            } else {
                cout << num << "th\n";
            }
        }
    }
}