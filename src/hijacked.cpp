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
    for (int run = 0; run < runs; run++){
        vector<string> foundMessage;
        vector<string> foundKeys;
        string chars;
        int length;
        cin >> length;
        getline(cin, burn);
        getline(cin, chars);
        for (int i = 0; i < chars.size()-5; i++){
            string keyWord = chars.substr(i, 3);
            string revKeyWord = keyWord;
            reverse(revKeyWord.begin(), revKeyWord.end());
            // cout << keyWord << " " << revKeyWord << "\n";
            for (int j = i+3; j < chars.size()-2; j++){
                // cout << "looking at " << chars.substr(j, 3) << "\n";
                // cout << (chars.substr(j, 3) == revKeyWord) << "\n";
                if (chars.substr(j, 3) == revKeyWord){ // if we found the keyword
                    foundMessage.push_back(chars.substr(i+3, j-(i+3)));
                    foundKeys.push_back(keyWord);
                    i+=3;
                    //cout << "found message: " << (chars.substr(i, j-i)) << "\n";
                    break;
                    
                }

            }

        }

        //cout << foundMessage.size() << "\n";

        for (int j = 0; j < foundMessage.size(); j++){
            //cout << j << " " << foundMessage.size() << "\n";
            for (int k = 0; k < foundMessage[j].length()-1; k++){
                // if the dupped char is in the key, remove one of them
                if (foundMessage[j][k] == foundMessage[j][k+1] && foundKeys[j].find(foundMessage[j][k]) != 1){ 
                    foundMessage[j].erase(k, 1);
                    // cout << "removed a letter\n";
                }
            }
            cout << foundMessage[j] << endl;
            // cout << "j loop done \n";
        }

    }
    
}