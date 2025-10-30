#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s1 = {1, "Pratham", 95.5};
    cout << "Name: " << s1.name << " | Roll: " << s1.roll << " | Marks: " << s1.marks;
}

#include <iostream>
using namespace std;

union Data {
    int x;
    float y;
    char ch;
};

int main() {
    Data d;
    d.x = 10;
    cout << d.x << endl;
    d.y = 12.5;  // overwrites x
    cout << d.y << endl;
}


#include <iostream>
using namespace std;

enum Days { MON=1, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    Days today = WED;
    cout << "Day number: " << today;
}
