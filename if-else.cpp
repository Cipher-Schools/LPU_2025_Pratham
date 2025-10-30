#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    if (num % 3 == 0)
    {
        cout << "Divisible by 3";
    }
    if (num % 5 == 0)
    {
        cout << "Divisible by 3";
    }
    if (num % 5 == 0 && num % 3 == 0)
    {
        cout << "Divisible by both";
    }
    else
    {
        cout << "Not divisible by 3 and 5";
    }
    return 0;
}
