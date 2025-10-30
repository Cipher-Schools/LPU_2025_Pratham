#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the count" << endl;
    cin >> n;
    int a = 1;
    while (a <= n)
    {
        for (int i = 1; i <= a; i++)
        {
            cout << "*" << " ";
        }

        cout << endl;
        a++;
    }
    cout<<endl;
    while(n!=0){
        for(int i=n;i>0;i--){
            cout << "*" << " ";
        }
         cout << endl;
        n--;
    }
}
