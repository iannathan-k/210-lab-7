#include <iostream>
#include <string>

using namespace std;

// COMSC-210 | Lab 7 | Ian Kusmiantoro

const int SIZE = 5;

string* reverseArray(string* ptr);

void displayArray(string* ptr);

int main() {
    string* array = new string[SIZE];
    *(array + 0) = "Alice"; // init with some familiar names
    *(array + 1) = "Bob";
    *(array + 2) = "Charlie";
    *(array + 3) = "David";
    *(array + 4) = "Eve";

    string* new_array = reverseArray(array);

    cout << "Original array: ";
    displayArray(array);
    cout << "Reversed array: ";
    displayArray(new_array);

    delete[] array;
    delete[] new_array;

    return 0;
}

// reverseArray() reverses the array and returns a pointer to the modified array
// arguments: string* ptr, pointing to the old array
// returns: string* new_array, pointing to the modified array
string* reverseArray(string* ptr) {
    string* new_array = new string[SIZE];

    for (int i = 0; i < SIZE; i++) {
        // ptr + SIZE - i - 1, accesses the i-th element from the end
        *(new_array + i) = *(ptr + SIZE - i - 1);
    }

    return new_array;
}

// displayArray() prints out the array in a single line
// arguments: string* ptr, pointing to the old array
// returns: none
void displayArray(string* ptr) {
    for (int i = 0; i < SIZE; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}