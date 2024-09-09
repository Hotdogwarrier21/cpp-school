#define _USE_MATH_DEFINES

#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int runs;
    cin >> runs;
    string burn;
    getline(cin, burn);
    for (int i = 0; i < runs; i++){

        int numSensors;
        cin >> numSensors;
        vector<int> nums (numSensors-1);

        for (int i = 0; i < numSensors-1; i++){
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        int oldNum = 0;

        for (int num : nums){
            if (oldNum == 0){ // if oldNum doesnt exist (1st test case)
                oldNum = num;
            } else { // if oldNum exists (not 1st test case)
                if (num - oldNum != 1){ // if oldNum and currentNum are not one apart
                    cout << (num-1) << "\n";
                    oldNum = num;
                } else { // if its normal
                    oldNum = num;
                }
            }
        }
    }
}