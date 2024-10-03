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

        string school;
        getline(cin, school);

        vector<string> names;
        vector<string> grades;
        vector<int> creditHours;
        vector<float> gpas;

        int numStudents;
        cin >> numStudents;
        getline(cin, burn); // removes the new line character from runs input

        for (int i = 0; i < numStudents; i++){ // get all student inputs
            string in;
            getline(cin, in);
            vector<string> inSplit = split(in, ":");
            names.push_back(inSplit[0]);
            grades.push_back(inSplit[1]);
        }

        vector<float> gpa(numStudents);

        for(string grade : grades){ // calculate each students gpa
            vector<string> classGrades = split(grade, ","); // gets each class
            int gradePoints = 0;
            int hours = 0;
            float avg = 0.0;
            for (string CLASS : classGrades){ // for every class
                string hoursString(1, CLASS[1]);
                hours += stoi(hoursString);
                if (CLASS[0] == 'A'){
                    gradePoints += stoi(hoursString)*4;
                } else if (CLASS[0] == 'B'){
                    gradePoints += stoi(hoursString)*3;
                } else if (CLASS[0] == 'C'){
                    gradePoints += stoi(hoursString)*2;
                } else {
                    gradePoints += stoi(hoursString);
                }
            }
            creditHours.push_back(hours);
            avg = gradePoints/hours;
            gpas.push_back(avg);
        }

        float biggest = 0;
        int biggestHours = 0;
        int biggestIndex = 0;
        for (int i = 0; i < gpas.size(); i++){
            if (gpas[i] > biggest){
                biggest = gpas[i];
                biggestHours = creditHours[i];
                biggestIndex = i;
            } else if (gpas[i] == biggest && creditHours[i] > biggestHours){
                biggest = gpas[i];
                biggestHours = creditHours[i];
                biggestIndex = i;
            }
        }

        cout << school << " = " << names[biggestIndex] << "\n";
        for (float hoursfs : creditHours){
            cout << " " << hoursfs << " ";
        }
    }
}