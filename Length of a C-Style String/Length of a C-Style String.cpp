#include <iostream>
#include <cassert>

using namespace std;

int cstr(const char* str) {
    const char* p = str;
    while (*p != '\0') {
        ++p;
    }

    return p - str;
}

int main(){
    //Assert Tests
    assert(cstr("") == 0);
    assert(cstr("a") == 1);
    assert(cstr("Hello") == 5);
    assert(cstr("Pointer Practice") == 16);

    cout << "All Tests Passed!\n";


    //Demo
    char str[] = "Hello World!";
    char* ptr_str = str;
    int length = 0;

    cout << "\nPointer Assignment: Length of a C-Style String\n";
    cout << "String: " << str << '\n';

    while (*ptr_str != '\0') {
        ++length;
        ++ptr_str;
    }

    cout << "Length of the String: " << length << endl;

	return 0;
}
