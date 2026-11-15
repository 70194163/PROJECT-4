#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age";
    cin >> age;

    if (age >= 18) {
        cout << "eligible";
    } else {
        cout << "Not eligible";
    }

    return 0;
} 

