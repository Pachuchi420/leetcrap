#include <iostream>
#include <map>
#include <string>
using namespace std;


template <typename T>
void print(T input){
    cout << input << endl;
}

int romanToInt(string input){
    // Create an unordered map to link roman numerals to our decimal system.
    unordered_map<char, int> romanMap{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };


    // Set up the start 
    int finalNum = 0; 
    int prevValue = 0;
    int maxArraySlot = input.size() - 1;

    // Loop to iterate through whole thing
    for(int i = maxArraySlot; i >= 0; i--){
        int currNum = romanMap[input[i]];
        
        if (prevValue > currNum){
            finalNum -= currNum;
        } else {
            finalNum += currNum;
        }
        prevValue = currNum;

    }
    cout << "Our converted roman integer '" + input + "' is: " + to_string(finalNum) << endl; 
    return finalNum;
}


int main(){
    romanToInt("III");
}

