#include <string> 
#include <iostream> 
using namespace std;



// We deal with it by converting it into a string
bool isPalindrome(int num){ 
    string ogNum = to_string(num); 
    string revNum = ogNum;

    reverse(revNum.begin(), revNum.end()); 

    return ogNum == revNum;
}


// We deal mathematically 
bool isPalindromeMathematical(int num){ 
    // Deal with edge cases 
    if(num < 0 || (num%10 == 0  && num != 0)){
        return false;
    }

    // Reverse number 
    int ogNum = num; 
    int revNum = 0; 


    while(num > 0){ 
        int lastDigit = num % 10; // Takes last digit 
        revNum = revNum * 10 + lastDigit; // Places digit in respective spot
        num /= 10;  // Remove the last digit
    }

    return revNum == ogNum;

}



template <typename T>
void print(T input){
    cout << input << endl;
}


int main(){
    print(isPalindrome(120));
    print(isPalindromeMathematical(0));
}
