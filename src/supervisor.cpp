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
        int num_managers;
        getline(cin, burn);
        cin >> num_managers;
        map <string, string> employeeList;
        vector<string> managers;
        for (int i = 0; i < num_managers; i++){
            string manager;
            managers.push_back(manager);
            getline(cin, manager);
            int num_subjects;
            cin >> num_subjects;
            getline(cin, burn);
            for (int i = 0; i < num_subjects; i++){
                string employee;
                getline(cin, employee);
                employeeList[employee] = manager;
            }
        }
        for(string top_manager : managers){
            if (employeeList.find(top_manager) == employeeList.end()){
                employeeList[top_manager] = "CEO";
            }
        }
        for (auto employee : employeeList){
            bool atCEO = false;
            while (!atCEO){
                if (employee.second == "CEO"){
                    atCEO = true;
                    cout << employee.first << "\n";
                } else {
                    cout << employee.first << "/";
                    employee = employeeList[employee.second];
                }
            }
            
        }
    }
}