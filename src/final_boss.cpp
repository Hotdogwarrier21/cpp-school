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
        double health;
        int numAttacks;
        int turnCounter = 1;

        cin >> health >> numAttacks;
        vector<int> dmgs(numAttacks);
        vector<int> times(numAttacks);
        vector<double> DPT(numAttacks);
        getline(cin, burn);
        for (int j = 0; j < numAttacks; j++){
            int dmg;
            cin >> dmg;
            dmgs[j] = dmg;
            health -= dmg;
            //cout << "got attack " << j << "\n";
        }
        getline(cin, burn);
        for (int j = 0; j < numAttacks; j++){
            int time;
            cin >> time;
            times[j] = time;
            DPT[j] = dmgs[j]/double(times[j]);
            //cout << "got time " << j << "\n";
        }
        getline(cin, burn);

        

    }
}