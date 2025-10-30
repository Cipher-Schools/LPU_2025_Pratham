#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the count" << endl;
    cin >> n;
    int a = 1;
    int b=n;
    while (a <= n)
    { 
        for (int i = b-1; i > 0; i--)
        {
            
            cout << " ";
        }
        for (int i = 1; i <= a; i++)
        {
            
            cout << " *";
        }

        cout << endl;
        a++;
        b--;

    }
  
}
