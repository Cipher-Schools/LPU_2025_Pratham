#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
        cout << "Grade: A";
    else if (marks >= 75)
        cout << "Grade: B";
    else if (marks >= 50)
        cout << "Grade: C";
    else if (marks >= 35)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
}
