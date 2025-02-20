#define _USE_MATH_DEFINES

#include <cmath>
#include <bits/stdc++.h>
using namespace std;

vector<string> split(string s, string delim){
    vector<string> tokens; // stores all the words in s
    
    int index = s.find(delim);
    while (index != string::npos){
        string token = s.substr(0,index);
        tokens.push_back(token);
        s=s.substr(index+1);
        index = s.find(delim);
    }
    tokens.push_back(s);
    return tokens;
}

vector<int> intSplit(string s, string delim){
    vector<string> stringTokens = split(s,delim);
    vector<int> tokens;
    for (string num : stringTokens){
        tokens.push_back(stoi(num));
    }
    return tokens;
}

vector<float> floatSplit(string s, string delim){
    vector<string> stringTokens = split(s,delim);
    vector<float> tokens;
    for (string num : stringTokens){
        tokens.push_back(stof(num));
    }
    return tokens;
}

int main(){

    vector<vector<int>> arr(9, vector<int>(9, 0));
    string input;
    int index = 0;
    for (int i = 0; i<9; i++){ // for every row of input
        index = 0;
        getline(cin, input);
        for (char letter : input){ // for every char in the row
            if ((letter == '[') || (letter == ']') || (letter == '"') || (letter == ',')){

            } else { // if we found a number or .
                if (letter != '.'){ // found a number
                    arr[i][index] = (letter-'0');
                }
                index++;
            }
        }
    }

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
}