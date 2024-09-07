#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
void print(T input){
    cout << input << endl;
}

template <typename T>
void printVector(vector<T> input){
    int n = input.size();
    for (int i = 0; i < n; i++){
        cout << input[i] << " ";
    }
    cout << endl;
}

string longestCommonPrefix(vector<string>& input) {
    if (input.empty()) return "";

    string prefix = input[0];

    for(int i = 0; i < input.size(); i++){
        while(input[i].find(prefix) != 0 ){
            prefix = prefix.substr(0, prefix.size()-1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

int main(){
    vector<string> myStrings = {"flower", "float", "flow"};
    longestCommonPrefix(myStrings);
}