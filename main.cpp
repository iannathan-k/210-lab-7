#include <iostream>
#include <string>

using namespace std;

// COMSC-210 | Lab 7 | Ian Kusmiantoro

const int SIZE = 5;

string* reverseArray(string* ptr);

void displayArray(string* ptr);


int main() {
    string* array = new string[SIZE];
    *(array + 0) = "Alice";
    *(array + 1) = "Bob";
    *(array + 2) = "Charlie";
    *(array + 3) = "David";
    *(array + 4) = "Eve";

    string* new_array = reverseArray(array);

    cout << "Original array: ";

    return 0;
}

// are we returning a pointer to a new array or the old one modified?
string* reverseArray(string* ptr) {
    string* new_array = new string[SIZE];

    for (int i = 0; i < SIZE; i++) {
        *(new_array + i) = *(ptr + SIZE - i);
    }

    return new_array;
}

void displayArray(string* ptr) {
    for (int i = 0; i < SIZE; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}