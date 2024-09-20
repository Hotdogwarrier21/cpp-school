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
    getline(cin, burn);
    for (int i = 0; i < runs; i++){

        string line;
        getline(cin, line);
        vector<float> num1 = floatSplit(line, " ");
        
        getline(cin, line);
        vector<float> num2 = floatSplit(line, " ");

        vector<int> indexs;

        for (int i = 0; i < num1.size(); i++){
            if (num1[i] > 0.59 && num1[i] < 0.86 && num2[i] > 0.59 && num2[i] < 0.86){
                indexs.push_back(i);
            }
        }

        if (indexs.size() > 1){
            cout << "2 multipaction events were detected at time indices:";
            for (int j : indexs){
                cout << " " << j;
            }
            cout << "." << endl;
        } else if (indexs.size() > 0){
            cout << "A multipaction event was detected at time index " << indexs[0] << "." << endl;
        } else {
            cout << "No multipaction events detected." << endl;
        }
        {
            /* code */
        }
        

    }
}