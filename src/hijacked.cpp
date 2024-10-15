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
                    foundMessage.push_back(chars.substr(i, j-i));
                    foundKeys.push_back(keyWord);
                    i+=3;
                    cout << "found message: " << (chars.substr(i, j-i)) << "\n";
                    break;
                    
                }

            }

            for (int i = 0; i < foundMessage.size(); i++){
                for (int j = 0; j < foundMessage[i].length()-1; j++){
                    // if the dupped char is in the key, remove one of them
                    if (foundMessage[i][j] == foundMessage[i][j+1] && foundKeys[i].find(foundMessage[i][j]) != 1){ 
                        foundMessage[i].erase(j, 1);
                        cout << "removed a letter\n";
                    }
                }
            }
            cout << foundMessage.size() << endl;
        }

        cout << foundMessage.size() << endl;

    }
    
}