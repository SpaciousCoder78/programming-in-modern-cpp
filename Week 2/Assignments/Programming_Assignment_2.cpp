#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str) {
    string reversed;// LINE-1
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

bool isPalindrome(const string& str) {
    string reversedStr = reverseString(str);// LINE-2
    return str == reversedStr;
}

int main(){
    string input;
    cin >> input;

    string reversedInput = reverseString(input);
    cout << "Reversed: " << reversedInput << endl;

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;

    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
