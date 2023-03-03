#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    double grade1, grade2, average;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your first test grade: ";
    cin >> grade1;

    cout << "Enter your second test grade: ";
    cin >> grade2;

    average = (grade1 + grade2) / 2;

    if (average >= 6) {
        cout << name << " is approved." << endl;
    } else {
        cout << name << " is reproved." << endl;
    }

    return 0;
}