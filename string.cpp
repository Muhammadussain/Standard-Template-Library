#include <iostream>
#include <string>
#include <string_view>

using namespace std;

// Function to print string_view
void printString(string_view s) {
    cout << s << endl;
}

int main() {
    // Initialize string
    string s = "hussain";

    // Create string_view from string
    string_view str = s;

    cout << "string_view: " << str << endl;

    // Call function
    printString(s);

    // Size of string_view object (not string length)
    cout << "Size of string_view object: " << sizeof(str) << endl;

    cout << endl;

    // Length of actual string
    cout << "Length of string: " << s.size() << endl;

    // Reduce capacity (optional optimization)
    s.shrink_to_fit();
    cout <<"the  pointer to the string is "<< s.data()<< endl;
    cout <<"the  address to the string is "<< *(s.data())<< endl;
    cout <<"the  address to the string is "<< &s<< endl;

    // Find character position
    cout << "Position of 'h': " << s.find("h") << endl;
    s[0] = 'H';
    // Access raw data
    cout << "String data: " << s.data() << endl;

    // Print capacity
    cout << "String capacity: " << s.capacity() << endl;

    return 0;
}