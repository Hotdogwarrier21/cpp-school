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


        int a;
        int b;
        int c;
        int d;
        cin >> a >> b >> c >> d;
        getline(cin, burn);


        vector<int> sort(4);
        sort[0] = a;
        sort[1] = b;
        sort[2] = c;
        sort[3] = d;
        if (a > b){
            int store = a;
            sort[0] = b;
            sort[1] = store;
        }
        if (c > d){
            int store = c;
            sort[2] = d;
            sort[3] = store;
        }
        a = sort[0];
        b = sort[1];
        c = sort[2];
        d = sort[3];


        if ((a < c)){
            if (b > d){
                cout << "NO\n";
            } else if (b < c && a < d){
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }


        if (a > c){
            if (b < d){
                cout << "NO\n";
            } else if (b > c && a > d){
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }


    }
}

