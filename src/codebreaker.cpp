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

    int runs;
    cin >> runs;
    string burn;
    getline(cin, burn); // removes the new line character from runs input
    for (int i = 0; i < runs; i++){

        map<char, double> letters;
        int numStrings;
        cin >> numStrings;
        getline(cin, burn);
        string input;
        int totalLetters = 0;
        transform(input.begin(), input.end(), input.begin(),
            ::tolower);
        for (int i = 0; i < numStrings; i++){
            getline(cin, input);
            for (char letter : input){
                if (isalpha(letter)){
                    totalLetters += 1;
                    if (letters.find(letter) == letters.end()){
                        letters[letter] = 1.0;
                    } else {
                        letters[letter] += 1.0;
                    }
                }
            }
        }
        cout << "before out\n" << totalLetters << "\n";
        for (auto out : letters){
            cout << out.first<< ": " << (out.second/totalLetters)*100 << "%\n";
        }
    }
}