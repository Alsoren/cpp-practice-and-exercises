#include <iostream>
#include <algorithm>
using namespace std;

/*Write a recursive function to_int(const string& str) that converts a string of numerals to an integer.
For example, "4567" will be converted to 4567.*/

int to_int(const string& str){
    if (str.length() == 1)
    {
        return str[0] - '0';
    }

    return to_int(str.substr(0, str.length() - 1)) * 10 + (str.back() - '0');
}

/* Write a recursive function is_palindrome(const string& str, int left, int right)
to determine whether a string is a palindrome (reads the same backward and forward).
Capitalization and spaces are ignored.
For example, "anna" and "go dog" are palindromes.*/

bool is_palindrome(const string& str, int left, int right) {
    if (left >= right)
    {
        return true;
    }
    if (!isalnum(str[left])){
        return is_palindrome(str, left + 1, right);
    }
    if (!isalnum(str[right])){
        return is_palindrome(str, left, right - 1);
    }
    if (tolower(str[left]) != tolower(str[right])){
        return false;
    }

    return is_palindrome(str, left + 1, right - 1);
}

/* Write a recursive function float series(int n) to add the first n elements of the series:
1 + 1/2 + 1/3 + ... + 1/n */

float series(int n){
    if(n == 1){
        return 1.0;
    }

    return 1.0/n + series(n-1);
}

/*Write a recursive function bool is_in_string(const string& str, char ch)
to check whether a specific character is in a string.*/

bool is_in_string(const string& str, char ch){ // Kendim
    if (str[0] == ch){
        return true;
    }
    if (str.length() == 1 && str[0] != ch){
        return false;
    }
    return is_in_string(str.substr(1), ch);
}

/*Write a recursive function int count_char(const string& str, char ch)
to count all occurrences of a specified character in a string. */

int count_char(const string& str, char ch){ // Kendim
    if (str.empty()){
        return 0;
    }
    if (str[0] == ch){
        return 1 + count_char(str.substr(1), ch);
    }
    return count_char(str.substr(1), ch);
    
}

/*Write a recursive function string remove_char(const string& str, char ch)
that removes all occurrences of a specified character from a string. */

string remove_char(const string& str, char ch){ // Kendim
    if(str.empty()){
        return "";
    }
    if(str[0] == ch){
        return "" + remove_char(str.substr(1), ch);
    }
    return str[0] + remove_char(str.substr(1), ch);
}

/* Write a recursive function int count_all_occ(const string& str, const string& key)
that counts the occurrences of a substring in a string. */

int count_all_occ(const string& str, const string& key) {
    if (str.length() < key.length()){
        return 0;
    }
    if(str.substr(0, key.length()) == key ){
        return 1 + count_all_occ(str.substr(1), key);
    }
    return count_all_occ(str.substr(1), key);
}

/*Write a recursive function string int_to_bin(int num)
that changes an integer to a binary number.*/

string int_to_bin(int num){
    if (num == 0)
        return "0";
    if (num == 1)
        return "1";
    return int_to_bin(num/2) + char('0' + num % 2);
    
}

/* Combinations
The combination of n objects taken k at a time can be calculated recursively using: */

int comb(int n, int k) {
    if (n == 0 || k == n)
        return 1;
    return comb(n - 1, k) + comb(n - 1, k - 1);
}

/*Write a recursive function to count vowels in a string.*/

int count_vowels(const string& str, int index = 0) {
    if (index >= str.length())
        return 0;
    char ch = tolower(str[index]);
    bool isVowel = false;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        isVowel = true;

    if (isVowel)
        return 1 + count_vowels(str, index + 1); // index yeni gönderilen değeri alıyormuş tanımlanma (int index = 0) sadece ilk çağrıda oluyormuş

    return count_vowels(str, index + 1);
}

/*Write a recursive function to remove consecutive duplicate substrings in a string.
Example: "aabccde" → "abcde"*/

string remove_duplicates(const string& str, int index = 0) {
    if (index == str.length())
        return "";
    char ch = str[index];
    while (index + 1 < str.length() && str[index + 1] == ch)
        index++;
    return ch + remove_duplicates(str, index + 1);
}

/*Write a recursive function to compute the sum of all elements in an array.*/

int sum_array(const int arr[], int size) {
    if (size == 0)
        return 0;

    return arr[size - 1] + sum_array(arr, size - 1);
}

/*Write a recursive function to find the maximum element in an array.*/

int max_array(const int arr[], int n) {
    if (n == 1)
        return arr[0];
    return max(arr[n - 1], max_array(arr, n - 1)); // max <- algorithm library
}

/*Write a recursive function to print numbers from 1 to n in both forward and backward order.*/

void print_forward_backward(int n, int current = 1) {
    if (current > n)
        return;
    cout << current;
    print_forward_backward(n, current + 1);
    cout << current;
}

/*Write a recursive function to compute the product of digits of a number.
Example: 234 → 2 * 3 * 4 = 24*/

int product_of_digits(int num) {
    if (num < 10) // sayı tek haneye indiğinde direkt o sayıyı döndürür
        return num;
    
    return (num % 10) * product_of_digits(num / 10);
}

/*Write a recursive function to replace all occurrences of a character with another in a string.
"banana -> bonono"*/

string replace_char(const string& str, char old_ch, char new_ch, int index = 0) {
    if (index == str.length())
        return "";
    char current = str[index];
    if (current == old_ch)
        current = new_ch;
    return current + replace_char(str, old_ch, new_ch, index + 1);
}

/*Write a recursive function to print all suffixes of a string.
Example: "hat" → "hat", "at", "t"*/

void print_suffixes(const string& str, int index = 0) {
    if (index == str.length())
        return;
    cout << str.substr(index) << endl;
    print_suffixes(str, index + 1);
}

/*Write a recursive function to check if an array is sorted in ascending order.*/

bool is_sorted(const int arr[], int n) {
    if (n <= 1)
        return true;
    if (arr[n-1] < arr[n-2])
        return false
    else 
        is_sorted(arr, n-1);
}

int main(){

    cout << replace_char("ahmetalp", 'a', 'o');
    return 0;
}
