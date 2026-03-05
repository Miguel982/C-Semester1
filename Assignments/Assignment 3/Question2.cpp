#include <iostream>
#include <array>

using namespace std;

bool testPalindrome(string, int, int);

int main(){
    string userInput;

    cout << "Enter a word/sentence:" << endl;

    //Gets the full sentence and not only the first word
    getline(cin, userInput);

    string result = testPalindrome(userInput, 0 , userInput.size() - 1)? "is" : "is not";
    cout << userInput << " " << result << " a palindrome.";

    return 0;
}

bool testPalindrome(string sentence, int start, int end){
    if(start >= end){
        return true;
    }
    else if(sentence[start] == sentence[end]){
        return testPalindrome(sentence, start + 1, end - 1);
    }
    else{
        return false;
    }
}