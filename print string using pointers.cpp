#include <iostream>
using namespace std;
int main() {
    char str[100];
    cout << "Enter a single word: ";
    cin >> str;
    cout << "Original string: " << str << endl;
    char *ptr = str;
    cout << "String printed using pointer: ";
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    return 0;
}
