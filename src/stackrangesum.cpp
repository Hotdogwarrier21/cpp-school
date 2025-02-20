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
    string inString;
    int length;
    int numQuery;
    vector<int> nums;
    vector<int> sums;
    cin >> length >> numQuery;
    getline(cin, burn);
    getline(cin, inString);
    nums = intSplit(inString, " ");
    int total = 0;

    for (int i = 0; i < length; i++){
        total += nums[i];
        sums[i] = total;
    }

    for (int i = 0; i < numQuery; i++){
        int low;
        int high;
        cin >> low >> high;
        getline(cin, burn);
        cout << (sums[high-1]-sums[low-1]) << "\n";
    }
}