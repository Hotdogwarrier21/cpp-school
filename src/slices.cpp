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
        
        int kellyScore = 0;
        int jimScore = 0;
        bool kellyHates = false;
        bool jimHates = false;
        int length, maxDif;
        cin >> length >> maxDif;
        getline(cin, burn);
        for (int j = 0; j < length; j++){
            string name;
            int score;
            cin >> name >> score;
            getline(cin, burn);
            if (name == "Kelly"){
                kellyScore = score;
                if ((kellyScore - jimScore) > maxDif){
                    jimHates = true;
                    //cout << "kelly: " << kellyScore << " jim Hates: " << jimScore << "\n";
                }
            } else {
                jimScore = score;
                if ((jimScore - kellyScore) > maxDif){
                    kellyHates = true;
                    //cout << "kelly Hates: " << kellyScore << " jim: " << jimScore << "\n";
                }
            }
        } 
        if (kellyHates && jimHates){
            cout << "Their friendship is doomed\n";
        } else if (kellyHates){
            cout << "Kelly hates Jim\n";
        } else if (jimHates){
            cout << "Jim hates Kelly\n";
        } else{
            cout << "Everything is good\n";
        }
    }
}