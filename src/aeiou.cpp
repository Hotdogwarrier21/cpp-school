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
        int count = 0;

        for (char character : in){
            if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
                count+=1;
            }
        }

        cout << count << "\n";
    }
}