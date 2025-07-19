#include<iostream>
using namespace std;
int main() {
    int i, j;
    cout << "Enter rows and columns: ";
    cin >> i >> j;
    if (i != j) {
        cout << "Diagonal sums can only be calculated in a square matrix." << endl;
        return 0;
    }
    int arr[i][j];
    int mainDiagSum = 0 , secDiagSum = 0;
    for(int a = 0; a < i; a++) {
        for(int b = 0; b < j; b++) {
            cin >> arr[a][b];
        }
    }
    for (int a = 0; a < i; a++) {
        for (int b = 0; b < j; b++) {
            cout << arr[a][b] << " ";
            if (a == b) {
                mainDiagSum += arr[a][b];  
            }
            if (a + b == i - 1) {
                secDiagSum += arr[a][b];  
            }
        }
        cout << endl;
    }
    cout << "Main diagonal sum = " << mainDiagSum << endl;
    cout << "Secondary diagonal sum = " << secDiagSum << endl;
    return 0;
}
