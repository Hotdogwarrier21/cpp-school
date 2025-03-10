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
        
        int health;
        cin >> health;
        int totalDmg = 0;
        getline(cin, burn);
        vector<int> slimes;
        slimes.push_back(health);
        while(slimes.size() > 0){

            int lowestHealth = slimes[slimes.size()-1];
            if (lowestHealth > 1){
                slimes.erase(slimes.end());
                slimes.push_back(lowestHealth/2);
                slimes.push_back(lowestHealth/2);
            } else {
                slimes.erase(slimes.end());
            }
            
            for (int j = 0; j < slimes.size(); j++){
              totalDmg += slimes[j];  
            }
        }
        cout << totalDmg << "\n";
    }
}