#include <iostream>
using namespace std;

bool isPalindrome(string str) {
    // Base case
    if (str.length() == 0 || str.length() == 1)
        return true;

    // Recursive case
    if (str[0] == str[str.length() - 1])
        return isPalindrome(str.substr(1, str.length() - 2)); 

    // Not a palindrome
    return false;
}

int main() {
    string str;
    cout << "Please enter a string: ";
    getline(cin, str);

    if (isPalindrome(str))
        cout << "It is a palindrome!" << endl;
    else
        cout << "Not a palindrome." << endl;

    return 0;
}
