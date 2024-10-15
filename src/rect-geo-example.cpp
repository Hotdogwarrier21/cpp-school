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

        vector<int> b1BotLCords(2);
        vector<int> b1TopRCords(2);

        vector<int> b2BotLCords(2);
        vector<int> b2TopRCords(2);

        vector<int> b3BotLCords(2);
        vector<int> b3TopRCords(2);

        // board 1 cords
        for (int i = 0; i < 2; i++){
            cin >> b1BotLCords[i];
        }
        for (int i = 0; i < 2; i++){
            cin >> b1TopRCords[i];
        }

        getline(cin, burn);

        // board 2 cords
        for (int i = 0; i < 2; i++){
            cin >> b2BotLCords[i];
        }
        for (int i = 0; i < 2; i++){
            cin >> b2TopRCords[i];
        }

        getline(cin, burn);

        // board 3 cords
        for (int i = 0; i < 2; i++){
            cin >> b3BotLCords[i];
        }
        for (int i = 0; i < 2; i++){
            cin >> b3TopRCords[i];
        }

        getline(cin, burn);
        
        int area1 = (abs(b1TopRCords[0] - b1BotLCords[0]) * abs(b1TopRCords[1] - b1BotLCords[1]));
        int area2 = (abs(b2TopRCords[0] - b2BotLCords[0]) * abs(b2TopRCords[1] - b2BotLCords[1]));
        int subtractArea = 0;

        // subtractitive area from 1 and 3
        // if the top line of blocker is in the 1st bilboard
        if (b3TopRCords[1] > b1BotLCords[1] && b3TopRCords[1] < b1TopRCords[1]){ 
            // if the right side of the rect are over the 1st bilboard
            if (b3TopRCords[0] > b1BotLCords[0] && b3TopRCords[0] < b1TopRCords[0]){
                int height = b3TopRCords[1] - b1BotLCords[1];
                int width = b3TopRCords[0] - b1BotLCords[0];
                //cout << height << " " << width << "\n";
                subtractArea += (height*width);
            }
            // if the left side of the rect are over the 1st bilboard
             else if (b3BotLCords[0] > b1TopRCords[0] && b3BotLCords[0] < b1BotLCords[0]){
                int height = b3BotLCords[1] - b1BotLCords[1];
                int width = b1TopRCords[0] - b3BotLCords[0];
                //cout << height << " " << width << "\n";
                subtractArea += (height*width);
             }
        }

    }
}