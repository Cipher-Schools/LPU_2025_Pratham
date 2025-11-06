#include <iostream>
using namespace std;

void rotate(int matrix[][], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < m; i++) {
        int start = 0, end = n - 1;
        while (start < end) {
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            start++;
            end--;
        }
    }
}

int main() {
    int m, n;
    cout << "Enter size of square matrix: ";
    cin >> m;
    n = m; 

    int matrix[m][n];
    cout << "Enter elements:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    rotate(matrix, m, n);

    cout << "Rotated matrix:"<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
