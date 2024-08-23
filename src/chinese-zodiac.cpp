#define _USE_MATH_DEFINES

#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int runs;
    cin >> runs;
    for (int i = 0; i < runs; i++){

        int year;
        cin >> year;
        string yinYang;
        string element;
        string animal;

        if (year%2 == 0){
            yinYang = "Yang";
        } else {
            yinYang = "Yin";
        }

        int elemYear = year;
        elemYear -= 4;
        elemYear = elemYear%10;
        elemYear /= 2;
        
        if (elemYear == 0){     
            element = "WOOD";
        } else if (elemYear == 1){     
            element = "FIRE";
        } else if (elemYear == 2){     
            element = "EARTH";
        } else if (elemYear == 3){     
            element = "METAL";
        } else {
            element = "WATER";
        }

        int aniYear = year;
        aniYear -= 4;
        aniYear %= 12;
        
        //  - Rat, Ox, Tiger, Rabbit, Dragon, Snake, Horse, Goat, Monkey, Rooster, Dog, Pig
        if (aniYear == 0){     
            animal = "RAT";
        } else if (aniYear == 1){     
            animal = "OX";
        } else if (aniYear == 2){     
            animal = "TIGER";
        } else if (aniYear == 3){     
            animal = "RABBIT";
        } else if (aniYear == 4){     
            animal = "DRAGON";
        } else if (aniYear == 5){     
            animal = "SNAKE";
        } else if (aniYear == 6){     
            animal = "HORSE";
        } else if (aniYear == 7){     
            animal = "GOAT";
        } else if (aniYear == 8){     
            animal = "MONKEY";
        } else if (aniYear == 9){     
            animal = "ROOSTER";
        } else if (elemYear == 10){     
            animal = "DOG";
        } else {
            animal = "PIG";
        }

        cout << year << " " << yinYang << " " << element << " " << animal << "\n";
    }
}