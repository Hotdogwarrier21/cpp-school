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
    string burn;
    string numbersString;
    int length;
    int target;
    vector<int> nums;
    bool found = false;

    cin >> length >> target;
    getline(cin, burn);
    getline(cin, numbersString);
    nums = intSplit(numbersString, " ");

    for (int i = 0; i < length; i++){
        for (int j = i+1; j < length; j++){
            if (found){
                break;
            }
            if (nums[i] + nums[j] == target){
                found = true;
                cout << (i+1) << " " << (j+1) << "\n";
            }
        }
        if (found){
            break;
        }
    }

    if (!found){
        cout << "IMPOSSIBLE\n";
    }
    
}