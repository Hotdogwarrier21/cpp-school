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
        string inLine;
        getline(cin, inLine);
        vector<string> words = split(inLine, " ");
        if (words[0] == "formatHeight"){
            cout << words[1] << "'" << words[2] << "\"\n";
        } else if (words[0] == "formatDate") {
            if (words[2].length() < 2){
                words[2].insert(0, "0");
            }
            if (words[3].length() < 2){
                words[3].insert(0, "0");
            }
            cout << words[1] << words[2] << words[3] << "\n";
        } else {
            for (int j = 1; j < words.size()-1; j++){
                cout << words[j] << ",";
            }
            cout << words[words.size()-1] << "\n";
        } 
    }
}