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
        vector<int> inNum = intSplit(inLine, " ");
        sort(inNum.begin(), inNum.end());

        int pastNum = inNum[0];
        int currentNum;
        int count = 1;
        string outBool = "FALSE";

        for (int i = 1; i < inNum.size(); i++){

            currentNum = inNum[i];
            if (currentNum == pastNum){ // if the numbers are the same, increase count
                count++;
            } else { // if the numbers are different
                if (count == 3){ // tripplet
                    outBool = "TRUE";
                    break;
                } else { // not tripplet, reset vars
                    count == 1;
                }
            }
            pastNum == currentNum;
        }        

        cout << outBool << "\n";
    }
}