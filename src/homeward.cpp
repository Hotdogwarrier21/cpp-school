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

        map<string, string> passes;
        int numPasses;
        cin >> numPasses;
        string pass;
        vector<string> passSplit;
        string startCity;
        string endCity;
        getline(cin, burn);
        for (int i = 0; i < numPasses; i++){
            getline(cin, pass);
            passSplit = split(pass, " ");
            startCity = passSplit[0];
            endCity = passSplit[1];
            passes[startCity] = endCity;
        }

        for (auto &word : passes){
            if (passes.find(word.second) == passes.end()){ // if the second place is not found, start there
                startCity = word.second;
                cout << "did not find " << word.second << "\n";
                break;
            }
        }
        cout << "start: " << startCity << "\n";
    }
}